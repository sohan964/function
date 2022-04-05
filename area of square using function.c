#include <stdio.h>//find area of square 
int squareArea(int r);//here I declyer the function
int main()
{
    int redius,area;
    printf("enter redius:");
    scanf("%d",&redius);
    area = squareArea(redius);//here I will call
    printf("area = %d",area);
    return 0;
}

int squareArea(int r)//here from I will call 
{
    return r*r;//this means the area will return on the main function
}
