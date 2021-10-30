/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,i;
    int *ptr=&a;
    scanf("%d",ptr);
    for(i=2;i<a/2;i++){
        if(a%i==0){
            printf("not prime");
            return 0;
        }
    }
    printf("prime");

    return 0;
}
