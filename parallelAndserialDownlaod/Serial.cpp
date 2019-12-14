#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>
#include <sys/wait.h>
#include<fstream>
#include<vector>
#include<cstring>
#include<iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    //Vector that will hold the urls
    vector <string> links;
    
    //open the file
    ifstream inFile;
    inFile.open("5urls.txt");
    
    if(inFile.fail()){
        cerr<<"Can't open file"<<endl;
        exit(0);
    }
    
    //Filling up the vector with the urls
    string line;
    while(getline(inFile,line)){
        links.push_back(line);
    }
    //close the file
    inFile.close();
    
    //variables for the downloading part of the program
    string temp;
    int urlLength = 0;
    pid_t pid =-1;
    int urlNum = 0;
    char* char_array;
    
    //downloading the files
    while(urlNum<links.size()){
        temp = links[urlNum];
        ++urlNum;
        urlLength = temp.length();
        
        pid = fork();
        if(pid<0){
            cerr<<"fork failed"<<endl;
            exit(1);
        }
        if(pid==0){
            cout<<"I am child "<<urlNum<<endl;
            
            char_array = new char[urlLength+1];
            strcpy(char_array,temp.c_str());
            execlp("/usr/bin/wget","wget",char_array,NULL);
            delete [] char_array;
        }
        else{
            wait(NULL);
            cout<<"URL "<<urlNum<<" is complete"<<endl;
        }
    }
    cout<<"Parent is complete"<<endl;
    return 0;
}
