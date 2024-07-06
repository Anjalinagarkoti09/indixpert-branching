#include<stdio.h>
int sum(int num1,int num2);
int sub(int num1,int num2);
void main()
{
    int number , number2,result,total,choice;

    printf("Enter a number :");
    scanf("%d",&number);
    printf("Enter a number :");
    scanf("%d",&number2);

    printf("\n1. for Addition");
    printf("\n2. for Subtraction");
    printf("\n0. for Exit");

    printf("\nEnter your choice from above : ");
    scanf("%d",&choice);

    switch(choice)
    {
         case 0:
            break;
         case 1:
            result=sum(number,number2);
            printf("%d",result);    
            break;
         case 2:
            total=sub(number,number2);
            printf("%d",total);
            break;
    }

}
int sum(int x,int y)
{
    return x+y;
}
int sub(int a,int b)
{
    return a-b;
}