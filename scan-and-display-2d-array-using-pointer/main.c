/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int array[100][100];
  
   int n=3,i,j;
   for(i=0;i<n;i++){
       for(j=0;j<n;j++){
           scanf("%d", (*(array + i) + j));
       }
   }
   for(i=0;i<n;i++){
       for(j=0;j<n;j++){
           printf("%d ",*(*(array + i) + j));
       }
       printf("\n");
   }
    return 0;
}
