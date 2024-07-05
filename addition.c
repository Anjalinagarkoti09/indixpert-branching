#include<stdio.h>

int sum(int num1, int num2);

int main()

{
int num1;
int num2;

printf("enter num1: ");
scanf("%d" ,&num1);

printf("enter num2: ");
scanf("%d" ,&num2);
 
 int sum=(num1+num2);
 printf("the sum of two number is : %d" ,sum);

    return 0;
}
int sum(int num1 ,int num2)

{
return num1+num2;

}