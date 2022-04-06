/******************************************************************************
passing array

*******************************************************************************/

#include <stdio.h>

int maximum(int a[])//here I will call on main function
{
    int i;
    int max=a[0];
    for(i=1;i<5;i++)
    {
        if(max<a[i])
        max=a[i];
    }
    return max;//here will return the maximumvalue on the main function
}
int main()
{
    int a[]={10,50,20,70,80};
   int maximumvalue = maximum(a);//here from I will call
   printf("maximumvalue = %d",maximumvalue);//here will print the max value

}
