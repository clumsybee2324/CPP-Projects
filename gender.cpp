#include <iostream>

int main(){

    using namespace std;
    string gender;
    string name;
    
    cout<<"Enter your name: ";
    getline(cin,name);

    cout<<"Enter your gender Mr/Ms "<<name<<"(female/male): ";
    getline(cin,gender);

    if(gender=="male"){
        cout<<"Welcome Mr. "<<name<< ", please sign in your account!\n";
    }else if(gender=="female"){
        cout<<"Welcome Ms. "<<name<<", please sign in your account!\n";
    }else{
        cout<<"Welcome Dear "<<name<<", please sign in your account!\n";
    }

    return 0;
}