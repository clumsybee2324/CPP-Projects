#include <iostream>
using namespace std;

class CellPhones{
    public:
        virtual void Ring()=0;
};
class Nokia: public CellPhones{
    void Ring(){
        cout<<"diririridiririririiiii"<<endl;
    }
};
class ChineseToy: public CellPhones{
    void Ring(){
        cout<<"Ayayaymmmm your little butterflyyyy"<<endl;
    }
};

int main(){

    CellPhones* cp1= new Nokia;
    CellPhones* cp2= new ChineseToy;
    
    CellPhones* cellphones[2]={cp1, cp2};

    for (int i = 0; i <2; i++){
        cellphones[i]->Ring();
    }
    
    return 0;
}