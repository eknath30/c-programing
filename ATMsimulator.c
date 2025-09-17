#include<stdio.h>

int main(){
    int correctPIN = 4456;
    int enteredPIN;

    printf("Welcome to the ATM.\n");
    printf("Please enter your PIN:");
    scanf("%d", &enteredPIN);

    while(enteredPIN != correctPIN){
        printf("Incorrect PIN.Please try again:");
        scanf("%d",&enteredPIN);

    }
    printf("PIN accepted.You can now proceed with your transactions.\n");
    return 0;
}