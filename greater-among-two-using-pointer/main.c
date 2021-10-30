/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a=10,b=20;
    int *ptr1=&a;
    int *ptr2=&b;
    if(*ptr1>*ptr2){
        printf("A");
    }else{
        printf("B");
    }

    return 0;
}
