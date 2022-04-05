#include <stdio.h>//find x to the power y using pow function
#include<math.h>
int main()
{
    double base,exponent,result;
    printf("enter the base:");
    scanf("%lf",&base);
    printf("enter the exponent:");
    scanf("%lf",&exponent);
    result=pow(base,exponent);//this means base to the power exponent
    printf("%lf",result);

    return 0;
}
