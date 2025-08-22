#include <iostream>
using namespace std;

class Human{
    public:
        virtual void Speak(){
            cout<<"Speaks!"<<endl;
        }
};
class Ayda: public Human{
    public:
        void Speak(){
            cout<<"Hello my name is Ayda and i am 20!"<<endl;
        }
};
class Arda: public Human{
    public:
        void Speak(){
            cout<<"Hello my name is Arda and i am 21!"<<endl;
        }
};

int main(){

    Human* girl= new Ayda();
    Human* boy= new Arda();

    Human* human[2]={girl,boy};

    for (int i = 0; i < 2; i++){
        human[i]->Speak();
    }
    

    return 0;
}