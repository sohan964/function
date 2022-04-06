#include <stdio.h>
#include<math.h>
double calculatePower(int base, int exponent);//here I diclyar the function
int main()
{
    double base,exponent;
    printf("enter base:");
    scanf("%lf",&base);
    
    printf("enter exponent:");
    scanf("%lf",&exponent);
    
   double result= calculatePower(base,exponent);//here I will call what is thouse values
    printf("result=%lf",result);
}
//here will not return any value that's why I take void function
double calculatePower(int base, int exponent)//here from I call the main function 
{
    return pow(base,exponent);
    
}
