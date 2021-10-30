/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a=3,i,res=1;
    int *result=&res;
    for(i=1;i<=a;i++){
        *result=(*result)*(i);
    }
    printf("%d",res);
    

    return 0;
}
