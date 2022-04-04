#include <stdio.h>//paramitar with return type

int sum(int a, int b,int c)//here I dicliear sum function and paramitar
//inside the bracket
{
   return a+b+c;//here will return the value of sum
   
}

int main()//this is the main function
{
   int num1,num2,num3,result;
   scanf("%d %d %d",&num1,&num2,&num3);
   
   
   result= sum(num1,num2,num3);//here from I call the sum function
   printf("%d",result);//here will be printf return value
   scanf("%d %d %d",&num1,&num2,&num3);
   result= sum(num1,num2,num3);//here I again call the sum function
   printf("%d",result);//here again will print return value
}
