#include<stdio.h>

int sum (int num1 , int num2);

int main()
{

int number1;
int number2; 


printf("enter the first number :");
scanf("%d",&number1);


printf("enter the second number :");
scanf("%d",&number2);


int sum=(number1+number2);

printf("the sum of two number is : %d",sum);


    return 0;
}
