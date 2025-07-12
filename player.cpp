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
        void playgirl(){
            cout<<"Your choice is a girl!\n";
        }
}; 
class Boy: public Player{
    public:
        void playboy(){
            cout<<"Your choice is a boy!\n";
        }
};


int main(){

    Girl playergirl;
    Boy playerboy;

    playergirl.name="Ayda";
    playergirl.age=20;

    playerboy.name="Arda";
    playerboy.age=21;

    playergirl.greet();
    cout<<"My name is "<<playergirl.name<<" and i'm "<<playergirl.age<< " years old!\n";
    playergirl.playgirl();

    return 0;
}