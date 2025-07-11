#include <iostream>

using namespace std;

class Icecream{
    public:
        string scoop1;
        string scoop2;
        string scoop3;
        string scoop4;

        Icecream(string scoop1){
            this->scoop1=scoop1;
        }
        Icecream(string scoop1, string scoop2){
            this->scoop1=scoop1;
            this->scoop2=scoop2;
        }
        Icecream(string scoop1, string scoop2, string scoop3){
            this->scoop1=scoop1;
            this->scoop2=scoop2;
            this->scoop3=scoop3;
        }
        Icecream(string scoop1, string scoop2, string scoop3, string scoop4){
            this->scoop1=scoop1;
            this->scoop2=scoop2;
            this->scoop3=scoop3;
            this->scoop4=scoop4;
        }

};

int main(){

    int num_scoops;

    Icecream icecream1("chocolate");
    Icecream icecream2("chocolate", "vanilla");
    Icecream icecream3("chocolate", "vanilla", "caramel");
    Icecream icecream4("chocolate", "vanilla", "caramel", "toffee");

    cout<<icecream1.scoop1<<endl;
    cout<<icecream2.scoop1<<endl;
    cout<<icecream2.scoop2<<endl;

    return 0;

}