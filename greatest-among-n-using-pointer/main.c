/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int array[100];
   int *arr1=array;
   int size,i;
   int max=0;
   printf("Enter Size of Array:");
   scanf("%d",&size);
   printf("Enter Array Elements\n");
   for(i=0;i<size;i++){
       scanf("%d",arr1);
       arr1++;
   }
   arr1=array;
   for(i=0;i<size-1;i++){
       if((*(arr1+i))>(*(arr1+i+1))){
           max=*(arr1+i);
       }else{
           max=*(arr1+i+1);
       }
   }
   printf("%d",max);
    return 0;
}
