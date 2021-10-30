/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
   int array[100];
   int *arr=array;
   int size,i;
   double ans=0;
   double *a=&ans;
   int *n=&size;
   printf("Enter Total numbers:");
   scanf("%d",n);
   printf("Enter Numbers:");
   
   for(i=0;i<*n;i++){
       scanf("%d",arr);
       arr++;
   }
   arr=array;
   void average(int *arr ,int*,double*);
   average(arr,n,a);
   printf("%lf",ans);
    return 0;   
}

void average(int *arr ,int*a,double*b){
    double sum=0;
    for(int i=0;i<*a;i++){
     sum=sum+*arr;
        arr++;
    }
    *b=sum/(*a);
}

