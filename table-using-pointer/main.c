/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int a,i;
   int *a1=&a;
   scanf("%d",a1);
   for(i=1;i<=10;i++){
       printf("%d*%d=%d\n",*a1,i,(*a1)*i);
   }

    return 0;
}

