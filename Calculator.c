#include <stdio.h>
#include<conio.h>
int sum(int num1, int num2);
int sub(int num1, int num2);
void main()
{
    int number, number2, result, total, choice ;

   
    do
    {
        printf("\nEnter a number :\n");
        scanf("%d", &number);
        printf("Enter a number :\n");
        scanf("%d", &number2);

        printf("\n1. for Addition");
        printf("\n2. for Subtraction");
        printf("\n0. for Exit");

        printf("\nEnter your choice from above : ");
        scanf("%d", &choice);
        getchar();

        switch (choice)
        {
        
            case 1:
                result = sum(number, number2);
                printf("%d", result);
                break;
            case 2:
                total = sub(number, number2);
                printf("%d", total);
                break;
            case -3:
                getchar();
                printf("\nPlease Enetr a Valid Number\n");
                break;
            default:
                printf("Please Enter a Valid Number");
                break;        
        }
    }while(choice!=0);
}

int sum(int x, int y)
{
    return x + y;
}
int sub(int a, int b)
{
    return a - b;
}