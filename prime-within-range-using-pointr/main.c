/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int range1,range2,i,flag=0,count=0;
    int *ptr2=&range2;
    int *ptr=&range1;
    int *raiser=&flag;
    int **flager=&raiser;
    int *counter=&count;
    
    scanf("%d",ptr);
    scanf("%d",ptr2);
  if(*ptr<2){
      *ptr=2;
  }
    
    for(int x=*ptr;x<*ptr2;x++){
        **flager=0;
       for(i=2;i<x;i++){
           if(x%i==0){
               **flager=1;
           }
       }
       if(**flager==0){
           count++;
           printf("%d ",x);
           
       }
    }
    printf("\n%d",count
    );

    return 0;
}
