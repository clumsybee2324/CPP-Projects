#include <iostream>

class Receptionist{
    private:
    std::string name;
    int employeeID;
    std::string role;
    public:
    void setReceptionistInfo(std::string name, int id, std::string role){
        this->name=name;
        this->employeeID=id;
        this->role=role;
    }
    std::string getName(){
        return name;
    }
    int getEmployeeID(){
        return employeeID;
    }
    std::string getRole(){
        return role;
    }
    
    void displayReceptionistInfo(){
        std::cout<<getEmployeeID()<<"\n";
        std::cout<<getName()<<"\n";
        std::cout<<getRole()<<"\n";
    }
};

class HotelRoom{
    private:
        int roomNumber;
        std::string roomType;
        int pricePerNight;
        std::string reservationPassword;
        std::string guestName;
        bool isReserved;
    public:
        void setRoomInfo(int number, std::string type, double price, std::string password, std::string name){
            this->roomNumber=number;
            this->roomType=type;
            this->pricePerNight=price;
            this->reservationPassword=password;
            this->isReserved=false;
            this->guestName=name;
        }
        int getRoomNumber(){
            return roomNumber;
        }
        std::string getRoomType(){
            return roomType;
        }
        double getPrice(){
            return pricePerNight;
        }
        bool isRoomReserved(){
            return isReserved;
        }
        std::string getGuestName(){
            if(isReserved == true){
                return guestName;
            }else{
                std::cout<<"The room is empty!";
                return "";
            }
        }
        void reserveRoom(std::string guest, std::string password){
            if(isReserved== false && password==reservationPassword){
                std::cout<<"The room is reserved for "<<guest;
                this->isReserved=true;
            }else{
                std::cout<<"ERROR!";
            }
        }
        void cancelReservation(std::string password){
            if(isReserved== true && password ==reservationPassword){
                std::cout<<"The reservation is cancelled!";
                this->isReserved=false;
            }else{
                std::cout<<"ERROR!";
            }
        }
        void updatePrice(double newPrice){
            this->pricePerNight=newPrice;
        }
};


int main(){

    Receptionist receptionist1;
    receptionist1.setReceptionistInfo("Ayda", 150230098, "student");
    receptionist1.displayReceptionistInfo();
    HotelRoom room1;
    room1.setRoomInfo(712, "Suit", 3300, "ilovearda", "Ayda"); 
    std::cout<<room1.getGuestName();
    std::cout<<"\n";  
    room1.reserveRoom("Ayda", "ilovearda");
    std::cout<<"\n"; 
    room1.cancelReservation("ilovearda");
    std::cout<<"\n"; 
    room1.updatePrice(3900);
    std::cout<<room1.getPrice();
}
