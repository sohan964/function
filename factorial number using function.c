/******************************************************************************
find factorial using function

*******************************************************************************/

#include <stdio.h>
int fact(int n);
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int result= fact(n);//here from I call the function
    printf("factorial = %d",result);
    
}

int fact(int n)
{
    if(n==1)//here when n=1 then 
    return 1;// 1 will return on the main function
    else//when n!=1 then 
    return n*fact(n-1);n will multiplay with fact(n-1) and return, fact(n-1) means again this will go on fact 
    //every time decreage -1 until n==1 when will n=1 then return agin
}
