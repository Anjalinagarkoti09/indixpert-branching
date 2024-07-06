#include<stdio.h>
int add(int n1,int n2);
void main()
{
    int num1,num2,result;
    printf("Enter a number :");
    scanf("%d",&num1);
    printf("Enter a number :");
    scanf("%d",&num2);

    result=add(num1,num2);
    printf("Addition of two given numbers are : %d",result);
}
int add(int x,int y)
{
    return x+y;
}