#include <iostream>

int main(){

    using namespace std;
    int num=0;
    int i=1;

    cout<<"Enter a number to write 1 to that number: ";
    cin>>num;


    while(i<=num){
        cout<<i<<endl;
        i++;
    }

    return 0;

}