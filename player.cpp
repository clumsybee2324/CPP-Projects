#include <iostream>

using namespace std;

class Player{
    public:
        string name;
        int age;
        void greet(){
            cout<<"Hello!\n";
        }
};
class Girl: public Player{
    public:
        Girl(string name, int age){
            this->name=name;
            this->age=age;
        }
        void playgirl(){
            cout<<"Your choice is a girl!\n";
        }
}; 
class Boy: public Player{
    public:
        Boy(string name, int age){
            this->name=name;
            this->age=age;
        }
        void playboy(){
            cout<<"Your choice is a boy!\n";
        }
};


int main(){

    Girl playergirl("Ayda", 20);
    Boy playerboy("Arda", 21);


    playergirl.greet();
    cout<<"My name is "<<playergirl.name<<" and i'm "<<playergirl.age<< " years old!\n";
    playergirl.playgirl();

    return 0;
}