/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int last,temp,rev=0,a,i;
   int *ptr=&a;
   scanf("%d",ptr);
  temp=a;
    int *tempo=&temp;
   int *reverse=&rev;
   while(*ptr!=0){
        last=*ptr%10;
       *reverse=(*reverse)*10+last;
       *ptr/=10;
   }
   if(*tempo==*reverse){
       printf("Yes");
   }else{
       printf("No");
   }
    return 0;
}
