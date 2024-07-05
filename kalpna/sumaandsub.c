#include<stdio.h>

int main()
{
    int num1, num2, sum,sub ;

    printf("enter first number: ");
    scanf("%d",&num1);

    printf("enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    sub = num1 - num2;

    printf("sum: %d\n",sum);
    printf("sub: %d\n",sub);
    return 0;



}