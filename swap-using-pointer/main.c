/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a=10,b=20,temp;
    int *ptr1=&a;
    int *ptr2=&b;
    int *t=&temp;
    *t=*ptr1;
    *ptr1=*ptr2;
    *ptr2=*t;
    printf("a=%d b=%d",a,b);
    

    return 0;
}
