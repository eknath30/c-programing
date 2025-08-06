#include <stdio.h>
int main(){
    int num1,num2,sum;
    printf("Enter first number:");
    scanf("%d",&num1);
    printf("Enter second number:");
    scanf("%d",&num2);
    sum=add(num1+num2);
    printf("Addition of two number is:%d\n",sum);
    return 0;
}
