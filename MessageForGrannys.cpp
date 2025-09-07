#include <iostream>
using namespace std;

class BayramMesaji{
    public:
        void PrintMessage(){
            cout<<"Hayirli Bayramlar"<<endl;
        }
};
class CumaMesaji{
    public:
        void PrintMessage(){
            cout<<"Hayirli Cumalar"<<endl;
        }
};
class Mesaj: public BayramMesaji, public CumaMesaji{
    public:
        void PrintMessage(){
            BayramMesaji::PrintMessage();
            CumaMesaji::PrintMessage();
        }
};

int main(){
    Mesaj msg;
    msg.PrintMessage();
}
