//Getter and Setters:
#include <iostream>

using namespace std;

class Grade{
    private:
        int grade;
    public:
        int GetGrade(){
            if (grade<0 || grade>100){
                cout<<"Noooo la poliziaaa noooo!!!"<<endl;
                return 0;
            }
            return grade;
        }
        void SetGrade(int grade){
            this->grade=grade;
        }
};

int main(){

    Grade grade1;

    grade1.SetGrade(-20);

    cout<<grade1.GetGrade()<<endl;

    return 0;

}