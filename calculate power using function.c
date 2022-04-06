#include <stdio.h>
void calculatePower(int base, int exponent);//here I diclyar the function
int main()
{
    double base,exponent;
    printf("enter base:");
    scanf("%lf",&base);
    
    printf("enter exponent:");
    scanf("%lf",&exponent);
    
    calculatePower(base,exponent);//here I will call what is thouse values
    
}
//here will not return any value that's why I take void function
void calculatePower(int base, int exponent)//here from I call the main function 
{
    double i,result=1;
    
    for(i=1;i<=exponent;i++)
    {
        result=result*base;//here will calcluate base up to exponent time
    }
    
    printf("result=%lf",result);//in the end result will print
}
