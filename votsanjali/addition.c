#include<stdio.h>


int sum ( int firstnumber,int secondnumber);

int main()
{

 int firstnumber;
 int secondnumber;

printf("enter first number :");
scanf("%d",&firstnumber);

printf("enter second  number :");
scanf("%d",&secondnumber); 

int sum=(firstnumber+secondnumber);
printf("the sum of two number is :%d",sum);

    return 0;
}
 int sum( int firstnumber,int secondnumber)
{
    return firstnumber+secondnumber;
}