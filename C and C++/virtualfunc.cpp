#include <iostream>

using namespace std;

class Animal{
    public:
        virtual void MakeSound()=0; /*{
            cout<<"The animal makes a sound!"<<endl;
        } */
};
class Cat: public Animal{
    public:
        void MakeSound(){
            cout<<"Meow!!"<<endl;
        }
};
class Dog: public Animal{
    public:
        void MakeSound(){
            cout<<"Woof woof!"<<endl;
        }
};

int main(){

    Animal* cat= new Cat();
    Animal* dog=new Dog();
    /* cat->MakeSound();
    dog->MakeSound(); */

    Animal* animals[2]={cat,dog};
    for(int i=0; i<2; i++){
        animals[i]->MakeSound();
    }

    return 0;
}