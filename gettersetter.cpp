#include <iostream>

class Class{
    private:
        int num_std;
    public:
        Class classroom(int num_std){
            detectStudents(num_std);
        }
        int returnNumber(){
            return num_std;
        }
        void detectStudents(int num_std){
            if(num_std<0){
                this->num_std=0;
            }else if(num_std>25){
                this->num_std=25;
            }else{
                this->num_std=num_std;
            }
        } 
        
};

int main(){

    Class classroom1;
    Class classroom2;
    Class classroom3;

    classroom1.detectStudents(16);
    classroom2.detectStudents(-5);
    classroom3.detectStudents(32);

    std::cout<<classroom1.returnNumber()<<" is the number of the students in the class 1!\n";
    std::cout<<classroom2.returnNumber()<<" is the number of the students in the class 2!\n";
    std::cout<<classroom3.returnNumber()<<" is the number of the students in the class 3!\n";

    return 0;
}