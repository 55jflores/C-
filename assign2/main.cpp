#include <iostream>
#include <thread>
#include <mutex>
#include<fstream>
using namespace std;

mutex m;
ofstream file;

void numbers(){
    m.lock();
    for(int i = 0;i<10;i++){
        for(int j = 1;j<27;j++){
            this_thread::sleep_for(chrono::milliseconds(5));
            file<<j<<" ";
        }
       file<<endl;
    }
    file<<endl;
    m.unlock();
}
void alphabet(){
    m.lock();
    for(int i = 0;i<10;i++){
        for(int j = 65; j<91; j++){
            this_thread::sleep_for(chrono::milliseconds(5));
            file<<(char)j<<" ";
        }
       file<<endl;
    }
    file<<endl;
    m.unlock();
}

int main() {
    file.open("logfile.txt");
    
    file<<"Jesus' Project 2 started "<<endl;
   
    thread th1(numbers);
    thread th2(alphabet);
    
    file<<"Thread A created "<<endl;
    file<<"Thread B created "<<endl;
    file<<endl;

    th1.join();
    th2.join();
    
    file<<"Thread A terminated "<<endl;
    file<<"Thread B terminated "<<endl;
    file<<"Jesus' Project 2 ended "<<endl;
    
    file.close();
    return 0;
}
