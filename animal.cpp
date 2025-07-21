#include <iostream>

using namespace std;

class Animal{
    private:
        string name;
        int age;
    public:
        void SetName(string animal_name){
            name=animal_name;
        }
        string GetName(){
            return name;
        }
        void SetAge(int animal_age){
            age=animal_age;
            if(animal_age<0){
                age=0;
            }
        }
        int GetAge(){
            return age;
        }
        void Eat(){
            cout<<"NOM NOM!"<<endl;
        }
        void Sleep(){
            cout<<"ZZZZZZZZZZZ!"<<endl;
        }
};
class Dog: public Animal{
    public:
        void Bark(){
            cout<<"WOOF WOOF WOOF!"<<endl;
        }
};
class Cat: public Animal{
    public:
        void Meow(){
            cout<<"MEOWWW MEOWWW!"<<endl;
        }
};

int main(){
    Dog my_dog;
    my_dog.SetName("Paw");
    my_dog.SetAge(3);

    Cat my_cat;
    my_cat.SetName("Byte");
    my_cat.SetAge(2);

    cout<<"I'm a dog, my name is "<<my_dog.GetName()<<" and i am "<<my_dog.GetAge()<<" years old!\n";
    my_dog.Eat();
    my_dog.Bark();
    my_dog.Sleep();

    cout<<"I'm a cat, my name is "<<my_cat.GetName()<<" and i am "<<my_cat.GetAge()<<" years old!\n";
    my_cat.Eat();
    my_cat.Meow();
    my_cat.Sleep();

    return 0;
}