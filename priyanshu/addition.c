#include<stdio.h>
 

 int sum (int firstnumber,int secondnumber);

 int main()
 {
    int firstnumber;
    int secondnumber;

  printf("enter first number");
  scanf("%d",&firstnumber);

  printf("enter second number");
  scanf("%d",&secondnumber);



  printf("\nthe sum of number is: %d",sum(firstnumber, secondnumber));

    return 0;
  }
  int sum (int firstnumber,int secondnumber)
  { 
    return firstnumber+secondnumber;
  }
  
  