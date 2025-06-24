#include <iostream>

int main(){

    using namespace std;
    int num=0;

    cout<<"Enter a number to write 1 to that number: ";
    cin>>num;

    for(int i=1; i<=num; i++){
        cout<<i<<endl;
    }

    return 0;
}