#include <stdio.h>//find the area of triangle 
double triangleArea(int h, int b);//here I decliyar the function
int main()
{
    double hight, base;
    printf("enter hight:");
    scanf("%lf",&hight);
    printf("enter base:");
    scanf("%lf",&base);
    
    double area = triangleArea(hight,base);//this is the function
    printf("\narea= %lf",area);//here will print the area of triangle
    
    
}

double triangleArea(int h, int b)//here from I call the triangleArea function
{
    return 0.5*h*b;//here h and b means hight and base
}
