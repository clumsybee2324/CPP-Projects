#include <iostream>

int main(){
    using namespace std;

    string name;
    int age=0;

    cout<<"Enter your name: ";
    getline(cin,name);
    cout<<"Welcome to our website "<<name<<endl;

    cout<<"Enter your age "<<name<<":";
    cin>>age;

    if(age<13){
        cout<<"You are not allowed to use this website!\n";
    }else if(age>=13 && age<18){
        cout<<"Your parent has to confirm your parent cookies!\n";
    }else{
        cout<<"Welcome to our website "<<name<<", please create an account to continue!\n";
    }

    return 0;
    
}