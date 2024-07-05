#include<stdio.h>
int sum(int num1,int num2);
int subtract(int num1,int num2);

int main()
{
    int num1;
    int num2;

    printf("enter first number :- ");
    scanf("%d",&num1);
    printf("enter second number :- ");
    scanf("%d",&num2);

    int sum=num1+num2;
    int subtract=num1-num2;
    printf("\nsum of two numbers are :- %d",sum);
    printf("\nsubtract of two numbers are :- %d",subtract);


    return 0;
}
int sum(int num1,int num2)
{
    return num1 + num2;
}
int subtract(int num1,int num2)
{
    return num1 - num2;
}