#include<stdio.h>
int sum(int num1,int num2);


int main()
{
    int num1;
    int num2;

    printf("enter first number :- ");
    scanf("%d",&num1);
    printf("enter second number :- ");
    scanf("%d",&num2);

    int sum=num1+num2;

    printf("sum of two numbers are :- %d",sum);



    return 0;
}
int sum(int num1,int num2)
{
    return num1 + num2;
}
