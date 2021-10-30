/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define pi 3.14
int main()
{
    int a=10;
    int *ptr=&a;
    double area;
    double *ans=&area;
    *ans=pi*(*ptr)*(*ptr);
    printf("%lf",area);

    return 0;
}
