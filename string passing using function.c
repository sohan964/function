/* passing string to function and print every char using new inline
like intput sohan
     output s
            o
            h
            a
            n
            */
#include <stdio.h>
void display(char str[]);//here I declared the display function

int main()
{
    char str[]="sohan";
    display(str);//here I will call 
}

void display(char str[])//here from I will call on the main function
{
    int i=0;
    while(str[i]!='\0')
    {
        printf("%c\n",str[i]);
        i++;
    }
}
