//Constructors:
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

        Child(string name, string gender, int age){
            this->name=name;
            this->gender=gender;
            this->age=age;
        }
};


int main(){

    Child child1("Jane", "girl", 5);
    Child child2("Edward", "boy", 4);

    cout<<child1.name<<endl;
    cout<<child1.age<<endl;
    cout<<child1.gender<<endl;

    return 0;

}