//Inheritance 1:
#include <iostream>

using namespace std;

class Animal{
    public:
        string name;
        int age;
        void Eat(){
            cout<<"NOM NOM!"<<endl;
        }
        void Sleep(){
            cout<<"ZZZZZZZ!"<<endl;
        }
        void Drink(){
            cout<<"GLUP GLUP!"<<endl;
        }
};
class Bird : public Animal{
    public:
        void Fly(){
            cout<<"I fly!"<<endl;
        }
};
class Mammal : public Animal{
    public:
        void Walk(){
            cout<<"I walk"<<endl;
        }
};
class Fish : public Animal{
    public:
        void Swim(){
            cout<<"I swim"<<endl;
        }
};
class Cat : public Mammal{};
class Dog : public Mammal{};
class Parrot : public Bird{};

int main(){
    Cat cat1;
    Dog dog1;
    Fish fish1;
    Parrot parrot1;

    cat1.name="Joey"; cat1.age=4;

    cout<<cat1.name<<endl;
    cout<<cat1.age<<endl;
    cat1.Eat();
    cat1.Sleep();
    cat1.Drink();
    cat1.Walk();

    return 0;
}