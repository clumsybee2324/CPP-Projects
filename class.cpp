#include <iostream>

using namespace std;

class Dear{
    public:
        string name;
        string major;
        int age;

        void Love(){
            cout<<"I love you <3!\n";
        }
        void Chat(){
            cout<<"Let's talk about something my love <3!\n";
        }
        void Cuddle(){
            cout<<"I want to cuddle :( <3 (Cuddles!)\n";
        }
};

int main(){

    Dear girl;
    Dear boy;

    girl.name="Ayda";
    girl.major="Ceng";
    girl.age=20;

    boy.name="Arda";
    boy.major="Ceng";
    boy.age=21;

    string option;
    string action;

    cout<<"Choose your dear: A boy or a girl?\n";
    getline(cin, option);

    if(option=="boy"){
        cout<<"His name is "<<boy.name<<
        ". He is studying "<<boy.major<<". And he is "<<boy.age<<" years old!\n";
        cout<<"What do you want to do with him rn?(love, cuddle or chat)\n";
        getline(cin,action);
        cout<<"You have a message from him:\n";
        if(action=="love"){
            boy.Love();
        }else if(action=="cuddle"){
            boy.Cuddle();
        }else if(action=="chat"){
            boy.Chat();
        }else{
            cout<<"Still developing the game! Sorry!\n";
        }
    }else if(option=="girl"){
        cout<<"Her name is "<<girl.name<<
        ". She is studying "<<girl.major<<". And she is "<<girl.age<<" years old!\n";
        cout<<"What do you want to do with her rn?(love, cuddle or chat)\n";
        getline(cin,action);
        cout<<"You have a message from her:\n";
        if(action=="love"){
            girl.Love();
        }else if(action=="cuddle"){
            girl.Cuddle();
        }else if(action=="chat"){
            girl.Chat();
        }else{
            cout<<"Still developing the game! Sorry!\n";
        }
    }else{
        cout<<"Still developing the game! Sorry!\n";
    }
    return 0;
}