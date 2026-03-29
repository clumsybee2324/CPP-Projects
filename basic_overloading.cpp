#include <iostream>

class Number{
public:
    int num;

    Number(int n){
        this->num=n;  //constructor was defined!
    }

    Number operator + (Number &numA){ //operator overloading function
        return this->num + numA.num;
    }

    bool operator ==(Number &numA){  //operator overloading function
        if(this->num == numA.num) return true;
        else return false;
    }
};

int main(){   //main function
    Number a(10);
    Number b(5);
    Number c= a+b;
    bool val= a==b;
    std::cout<<"C: "<<c.num<<std::endl;
    std::cout<<"The value of a=b: "<< val<< std::endl;
    return 0;
}
