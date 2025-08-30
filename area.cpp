#include <iostream>
using namespace std;

class Area{
    public:
        int height;
        int base;
        virtual void CalculateArea(){
            int area=0;
            area=base*height;
            cout<<"Area is "<<area<<endl;
        }
};
class Circle: public Area{
    public:
        int radius;
        int pi=3;
        void CalculateArea(){
            int area=0;
            area=radius*radius*pi;
            cout<<"Area is "<<area<<endl;
        }
        Circle(int radius){
            this->radius=radius;
        }
};
class Triangle: public Area{
    public:
        int base;
        int height;
        void CalculateArea(){
            int area=0;
            area=base*height/2;
            cout<<"Area is "<<area<<endl;
        }
        Triangle(int base, int height){
            this->base=base;
            this->height=height;
        }
};
int main(){

    Area* shape1= new Circle(4);
    Area* shape2= new Triangle(4,3);

    Area* shapes[2]={shape1, shape2};

    for (int i = 0; i < 2; i++){
        shapes[i]->CalculateArea();
    }
    
    return 0;
}