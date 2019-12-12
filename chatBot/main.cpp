#include <iostream>
#include <string>
using namespace std;

void again();

//steps 3 and 4a/b inside of each individual class
//arrays inside the functions hold key words to look for
//found, found1,... foundN variables detect if that certain word/phrase is inside users input

class technical_issues {
public:
    //The string variable used in the cin function
    string str = "";
    
    //For the user
    string user_intro_question[5] = {"having","trouble","need","help"};
    string user_tech_question[7] = {"can't","get","video","access","content","paid","play"};
    string support_tick[3] = {"check","ticket"};
    string tick_numbers[2] = {"345"};
    string tick_question[2] = {"resolved"};
    
    //For the content producer
    string broad_content_question[9] = {"latest","video","isn't","online","subscription","not","showing","cut","off"};
    
    void tech_place(){

        cout<<"Welcome to the technical issues section. What can I help you with. "<<endl;
        cin.ignore();
        getline(cin,str);
        /*-----------------------------------------
            FOR THE USER
         ------------------------------------------
         */
         
        size_t found = str.find(user_intro_question[0]);
        size_t found2 = str.find(user_intro_question[1]);
        
        size_t found3 = str.find(user_intro_question[2]);
        size_t found4 = str.find(user_intro_question[3]);
        //If statment looks for if the user entered the words having trouble, or need help
        if((found!= string::npos && found2!= string:: npos) ||(found3!= string::npos && found4!= string::npos) ){
            cout<<"Can you elaborate on what the exact question that you have is"<<endl;
            cin.ignore();
            getline(cin,str);
            
            size_t found5 = str.find(user_tech_question[0]);
            size_t found6 = str.find(user_tech_question[3]);
            size_t found7 = str.find(user_tech_question[4]);
            size_t found8 = str.find(user_tech_question[5]);
            
            size_t found9 = str.find(user_tech_question[1]);
            size_t found10 = str.find(user_tech_question[2]);
            size_t found11 = str.find(user_tech_question[6]);
            
            size_t found12 = str.find(support_tick[0]);
            size_t found13 = str.find(support_tick[1]);
            size_t found14 = str.find(tick_numbers[0]);
            //If user says that they can't get access to content they paid for
            if(found5!= string::npos && found6!= string::npos && found7!= string::npos && found8!= string::npos){
                cout<<"What did you buy, and when did you buy it? "<<endl;
                cin.ignore();
                getline(cin,str);
                cout<<endl<<"Ok, I will now transfer you over to one of our representatives"<<endl;
                //redirected, then asked if they have another question
            }
            //If user says they can't get videos to play on other devices
            else if(found5!= string::npos && found9!= string::npos && found10!= string::npos && found11!= string::npos){
                cout<<"On which devices does it work for currently? "<<endl;
                cin.ignore();
                getline(cin,str);
                cout<<endl<<"Noted. I will now transfer you over to our tech support department"<<endl;
                //redirected, then asked if they have another question
            }
            //If user says they wants to check in on their support ticket
            else if(found12!= string::npos && found13!= string::npos && found14!= string::npos){
                cout<<"Found your ticket. What question did you have regarding the ticket "<<endl;
                cin.ignore();
                getline(cin,str);
                size_t found15 = str.find(tick_question[0]);
                if(found15!= string::npos){
                    cout<<endl<<"Transfering you over to our ticket support"<<endl;
                    //redirected, then asked if they have another question
                }
            }
        }
        
        /*-----------------------------
            For the content producer
         ------------------------------
         */
         
        found = str.find(broad_content_question[0]);
        found2 = str.find(broad_content_question[1]);
        found3 = str.find(broad_content_question[2]);
        found4 = str.find(broad_content_question[3]);
        
        size_t found5 = str.find(broad_content_question[4]);
        size_t found6 = str.find(broad_content_question[5]);
        size_t found7 = str.find(broad_content_question[6]);

        size_t found8 = str.find(broad_content_question[7]);
        size_t found9 = str.find(broad_content_question[8]);
        //If content producer asks why his latest video isn't online
        if(found!=string::npos && found2!=string::npos && found3!=string::npos && found4!=string::npos){
            cout<<"When did you upload it"<<endl;
            cin.ignore();
            getline(cin,str);
            cout<<endl<<"Transfering you open to our ticket service to open up a support ticket"<<endl;
            //redirected, then asked if they have another question

        }
        //If content producer says that his subscription page is not showing their latest videos
        else if(found5!= string::npos && found6!= string::npos && found7!= string::npos && found!= string::npos && found2!= string::npos){
            cout<<"When did you upload your latest video "<<endl;
            cin.ignore();
            getline(cin,str);
            cout<<endl<<"We have see it here, but it is not the first video on your page"<<endl;
            
            cin.ignore();
            getline(cin,str);
            cout<<endl<<"Sure thing. Will be on that shortly"<<endl;
        }
        //If content producer asks why their video was cut off
        else if(found2!=string::npos && found8!=string::npos && found9!=string::npos){
            cout<<"There is a 10 minute max time for all videos"<<endl;
            cin.ignore();
            getline(cin,str);
            cout<<endl<<"It was stated in the terms and agreements"<<endl;
            cin.ignore();
            getline(cin,str);
            cout<<endl<<"We will definetly look into that for future plans"<<endl;
        }
    }
};

class payment_plan {
public:
    //The string variable used in the cin function
    string str = "";
    
    //For the user
    string user_pay_q[6] = {"pay","don't","know","how","stop","subscription"};
    string price_and_charge[4] = {"still","charged","video","cost"};
    
    //For the content producer
    string content_price[7] = {"charge","per","view","unlimited","viewing","setup","subscription"};
    string no_pay[2] = {"not","paid"};
    
    void pay_q(){
        cout<<"Welcome to the payment questions section. What can I help you with. "<<endl;

        cin.ignore();
        getline(cin,str);
        /*---------------
            FOR THE USER
        ------------------
        */
        size_t found = str.find(user_pay_q[0]);
        size_t found2 = str.find(user_pay_q[1]);
        size_t found3 = str.find(user_pay_q[2]);
        size_t found4 = str.find(user_pay_q[3]);
        
        size_t found5 = str.find(user_pay_q[4]);
        size_t found6 = str.find(user_pay_q[5]);

        size_t found7 = str.find(price_and_charge[0]);
        size_t found8 = str.find(price_and_charge[1]);
        
        size_t found9 = str.find(price_and_charge[2]);
        size_t found10 = str.find(price_and_charge[3]);
        
        //User wants to pay for something but doesn't know how
        if(found!= string::npos && found2!= string::npos && found3!= string::npos && found4!= string::npos){
            cout<<"No need to worry. Transfering you over to our payment department right now"<<endl;
            //redirected, then asked if they have another question
        }
        //User wants to stop their subscription to a feed
        else if(found5!= string::npos && found6!=string::npos){
            cout<<"Which subscription would you like to end "<<endl;
            cin.ignore();
            getline(cin,str);
            cout<<endl<<"Ok. Ending subscription of "<<str<<endl;
            
        }
        //User asks why they are still getting charged
        else if(found7!=string::npos && found8!=string::npos){
            cout<<"For which subscription are you still getting charged "<<endl;
            cin.ignore();
            getline(cin,str);
            cout<<endl<<"When did you cancel it "<<endl;
            cin.ignore();
            getline(cin,str);
            cout<<"Ok.We found that you indeed cancelled it. We will refund your money and cancel your subscription "<<endl;
        }
        //User asks about the price of the video
        else if(found9!=string::npos && found10!=string::npos){
            cout<<"$1 for video, comes out cheaper if you subscribe to the user "<<endl;
            cin.ignore();
            getline(cin,str);
            cout<<endl<<"Comes out to $5 per month if you subscribe to the user"<<endl;
        }
    /*-----------------
     FOR THE CONTENT PRODUCER
     
     */
        
        found = str.find(content_price[0]);
        found2 = str.find(content_price[1]);
        found3 = str.find(content_price[2]);
        found4 = str.find(content_price[3]);
        found5 = str.find(content_price[4]);

        found6 = str.find(content_price[5]);
        found7 = str.find(content_price[6]);
        
        found8 = str.find(no_pay[0]);
        found9 = str.find(no_pay[1]);
        //Content producer want to charge to view a video once
        if(found!=string::npos && found2!=string::npos && found3!=string::npos){
            cout<<"Price to view that video has now been updated"<<endl;
        }
        //Content producer wants to set a price to view the video unlimited ammount of times
        else if(found!=string::npos && found4!=string::npos && found5!=string::npos){
            cout<<"Price to view that video an unlimited ammount of times has been updated"<<endl;
        }
        //Content producer wants to setup price for a subscription to their channel or streams
        else if(found6!=string::npos && found7!=string::npos){
            cout<<"Price to subscribe to your channel has now been updated";
        }
        //Content producer asks why they aren't getting paid for their views/subscriptions
        else if(found8!=string::npos && found9!=string::npos){
            cout<<"You get paid according to how many views you get per week"<<endl;
            cin.ignore();
            getline(cin,str);
            cout<<endl<<"You have been viewed 10 times last week"<<endl;
            cin.ignore();
            getline(cin,str);
            cout<<endl<<"Transferring you over to the department in charge of paying content creators"<<endl;
            //redirected, then asked if they have another question
        }
    }
};

class content_availability {
public:
    //For the user
    string content_question[7] = {"videos","for","kids","music","where","latest","video"};
    string video_type[2] = {"cosplay","not cosplay"};
    string users[2] = {"codingallday","coding not all day"};
    
    void cont_q(){
        cout<<"Welcome to the content availability section. What can I help you with. "<<endl;
        string str;
        cin.ignore();
        getline(cin,str);
        size_t found = str.find(content_question[0]);
        size_t found2 = str.find(content_question[1]);
        size_t found3 = str.find(content_question[2]);
        
        size_t found4 = str.find(content_question[3]);
        
        size_t found5 = str.find(content_question[4]);
        size_t found6 = str.find(video_type[0]);

        size_t found7 = str.find(content_question[5]);
        size_t found8 = str.find(content_question[6]);
        size_t found9 = str.find(users[0]);

        //User asks if you have videos for kids
        if(found!=string::npos && found2!=string::npos && found3!=string::npos){
            cout<<"Yes we do. Now redirecting you to vidoes for kids"<<endl;
            //redirected, then asked if they have another question
        }
        //User asks if you have music videos
        else if(found!=string::npos && found4!=string::npos){
            cout<<"Yes we do. Now redirecting you to music videos"<<endl;
            //redirected, then asked if they have another question

        }
        //User asks where you can find videos on cosplay
        else if(found!=string::npos && found5!=string::npos && found6!=string::npos){
            cout<<"Redirecting you to the cosplay videos"<<endl;
            //redirected, then asked if they have another question

        }
        //User asks what's the latest video by the user codingallday
        else if(found7!=string::npos && found8!=string::npos && found9!=string::npos){
            cout<<"Latest video by user codingallday is: webscraping with python using beautiful soup"<<endl;
        }
    }
};

int main() {
    
    char question;
    bool valid = false;
    char language;
    
    //Step 1 from my flow chart
    cout<<"Hello. Hola."<<endl;
    //Spanish doesn't work. Just here since I said I would make my chatbot understand
    //multiple languages if I knew how to/had more time to research into it
    cout<<"For english, press 1. Para espanol, oprima 2 : ";
    cin>>language;
    //Step 2
    if(language=='1'){
        cout<<"For technical issues, press 1"<<endl;
        cout<<"To manage payments, press 2"<<endl;
        cout<<"For questions about available content, press 3"<<endl;
        
        while(!valid){//Loops back if user did not enter a valid value
            valid = true;
            cout<<"Enter number: ";
            cin>>question;
            
            if(question == '1'){
                technical_issues obj_tech;
                obj_tech.tech_place();
                //jump to technical issue class
            }
            else if(question == '2'){
                payment_plan obj_pay;
                obj_pay.pay_q();
                //jump to payment question class
            }
            else if(question == '3'){
                content_availability obj_cont;
                obj_cont.cont_q();
                //jump to content availability class
            }
            else{
                cout<<"Enter a valid value. Try again"<<endl<<endl;
                valid = false;
            }
        }
    }
    //step 5
    again();
    return 0;
}

void again(){
    //step 6a/b
    char answer;
    cout<<"Do you have another question? Press 1 for yes, any key for no"<<endl;
    cin>>answer;
    if(answer=='1'){
        main();
    }
    else{
        cout<<"Thank you,have a nice day"<<endl;
    }
}
