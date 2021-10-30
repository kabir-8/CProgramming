/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int n;
   int *num=&n;
   scanf("%d",num);
   int sum=1;
   int *ans=&sum;
   void fact(int *,int *);
   fact(num,ans);
   printf("%d",sum);
   return 0;
}

void fact(int *a,int *b){
    for(int i=1;i<=*a;i++){
        *b=(*b)*i;
    }
}
