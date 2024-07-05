#include<stdio.h>

int main()
{
    int num[2];
    printf("enter 2 num :");
    for(int i=1;i<=2;i++)
    {
        scanf("%d",&num[i]);
    
    }
    for(int i=1;i<=2;i++)
    {
        printf("the num are :");
        printf("%d",num[i]);
    }
return 0;

}