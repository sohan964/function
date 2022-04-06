/******************************************************************************
passing array

*******************************************************************************/

#include <stdio.h>

void display(int a[])//here from I call on main function
{
    int i=0;
    while(i<5)
    {
        printf("a[%d]=%d\n",i,a[i]);
        i++;
    }
}
int main()
{
    int a[]={10,50,20,70,80};
    display(a);//here will call 

}
