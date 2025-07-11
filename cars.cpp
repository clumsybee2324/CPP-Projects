#include <iostream>

struct cars{
    int id;
    char name[20];
    char model[20];
    bool is_rent;
};
typedef struct cars Cars;

void ListCars(Cars* cars, int size){

    for (int i = 0; i <size; i++){
        std::cout<<"Car "<<i+1<<":"<<cars[i].name<<" "<<cars[i].model<<" "<<cars[i].is_rent<<"\n";
    }
}

void RentCars(Cars* cars,int size){

    int id;

    std::cout<<"Enter the id of the car that you want to rent: ";
    std::cin>>id;

    if(cars[id-1].is_rent==true){
        std::cout<<"Sorry but the car is not avaliable!\n";
    }else{
        cars[id-1].is_rent=true;
        std::cout<<"Your car is avaliable: "<<cars[id-1].name<<" "<< cars[id-1].model<<"\n";
    }
}

void ReturnCars(Cars* cars, int size){

    int id=0;

    std::cout<<"Enter the id of the car which do you want to return:";
    std::cin>>id;

    if(cars[id-1].is_rent==1){
        cars[id-1].is_rent=0;
        std::cout<<"Hope you enjoyed!\n";
    }else{
        std::cout<<"Excuse me but you made a mistake i think!\n";
    }
}

int main(){

    using namespace std;

    int option=0;

    Cars cars[3]={{1,"Toyota", "Corolla", true}, 
             {2,"Renault", "Clio", false},
             {3, "Ford", "Focus", false}
    };
    
    while (option !=4){
        cout<<"Select one of them:\n";
        cout<<"1.List cars!\n";
        cout<<"2.Rent cars!\n";
        cout<<"3.Return cars!\n";
        cout<<"4.Exit!\n";

        cin>>option;

        switch(option){
            case 1:
                ListCars(cars, 3);
                break;
            case 2:
                RentCars(cars, 3);
                break;
            case 3:
                ReturnCars(cars,3);
                break;
            case 4:
                break;
            default:
                cout<<"Please select a valid option!\n";
                break;
        }
    }
    return 0;
}