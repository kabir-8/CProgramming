/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   
   int a=20,b=10,sum=0;
   int *x=&a;
   int *y=&b;
   int *z=&sum;
   void ans(int*,int*,int*);
   ans(x,y,z);
   printf("%d",sum);
   return 0;
}
void ans(int *a,int *b,int *c){
    *c=*a+*b;
}
