//C++ and Object Oriented Programing 1:
#include <iostream>

using namespace std;

class Child{
    public:
        string name;
        string gender;
        int age;

        void Speak(){
            cout<<"This child is speaking: Bla bla!"<<endl;
        }
        void Eat(){
            cout<<"This child is eating: Nom nom!"<<endl;
        }
        void Drink(){
            cout<<"This child is drinking: Lup lup!"<<endl;
        }
        void Sleep(){
            cout<<"This child is sleeping: Zzzzz!"<<endl;
        }
};


int main(){

    Child child1;
    Child child2;

    child1.name="Jane";         child2.name="Edward";
    child1.age=5;               child2.age=4;
    child1.gender="girl";       child2.gender="boy";

    cout<<child1.name<<endl;
    cout<<child1.age<<endl;
    cout<<child1.gender<<endl;

    return 0;
}