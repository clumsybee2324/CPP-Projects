//Constructors 2:
#include <iostream>

using namespace std;

class Icecream{
    public:
        string flavor1;
        string flavor2;
        string flavor3;
    
        Icecream(string flavor1){
            this->flavor1=flavor1;
        }
        Icecream(string flavor1, string flavor2){
            this->flavor1=flavor1;
            this->flavor2=flavor2;
        }
        Icecream(string flavor1, string flavor2, string flavor3){
            this->flavor1=flavor1;
            this->flavor2=flavor2;
            this->flavor3=flavor3;
        }
};

int main(){

    Icecream icecream1("chocolate");
    Icecream icecream2("chocolate", "caramel");
    Icecream icecream3("chocolate", "caramel", "vanilla");

    cout<<icecream3.flavor2<<endl;

    return 0;
}
