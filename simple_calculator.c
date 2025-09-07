#include <stdio.h>

void Addition(int num1, int num2){
    int result=0;
    result=num1+num2;
    printf("%d\n", result);
}

void Substraction(int num1, int num2){
    int result=0;
    result=num1-num2;
    printf("%d\n", result);
}

void Multiplication(int num1, int num2){
    int result=0;
    result=num1*num2;
    printf("%d\n", result);
}

void Division(int num1, int num2){
    if(num2 !=0){
        int result=0;
        result=num1/num2;
        printf("%d\n", result);
    }
}

void Exponential(int num1, int num2){
    int result=1;
    int i=0;
    while(i<num2){
        result=result*num1;
        i++;
    }
    printf("%d\n", result);
}

void Logarithm(int num1, int num2){
    int result=0;
    int i=0;
    while(num2/num1>=1){
        i++;
        num2=num2/num1;
    }
    printf("%d\n",i);
}

void Mod(int num1, int num2){
    int result=0;
    result= num1%num2;
    printf("%d\n", result);
}

int main(){

    int operation=0;
    while (operation !=8){
        printf("Please enter the operation:\n");
        printf("1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n5.Exponential\n6.Logarithm\n7.Mod\n8.Exit\n");
        scanf("%d", &operation);

        if(operation == 8){
            return 0;
        }
        int num1=0;
        int num2=0;
        printf("Enter the numbers:\n");
        scanf("%d%d",&num1,&num2);

        switch (operation){
        case 1:
            Addition(num1, num2);
            break;
        case 2:
            Substraction(num1, num2);
            break;
        case 3:
            Multiplication(num1, num2);
            break;
        case 4:
            Division(num1, num2);
            break;
        case 5:
            Exponential(num1,num2);
            break;
        case 6:
            Logarithm(num1, num2);
            break;
        case 7:
            Mod(num1, num2);
            break;       
        default:
            printf("Please enter a valid value!\n");
            scanf("%d", &operation);
            break;
        }
    }
    
    return 0;
}
