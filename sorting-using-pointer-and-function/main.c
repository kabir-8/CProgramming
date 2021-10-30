/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int array[100];
    void sorting(int *,int *);
    int *arr=array;
    int size,i;
    int *n=&size;
  
    printf("Enter Array Size:");
    scanf("%d",n);
    printf("Enter Array Elements:");
    for(i=0;i<*n;i++)
    {
        scanf("%d",&array[i]);
    }

   sorting(arr,n);
   
    for(int i=0;i<*n;i++){
        printf("%d ",array[i]);
    }
    

    return 0;
}
void sorting(int *p,int *l)
{
    int i,j,t;
     for(i=0;i<*l;i++){
       for(j=0;j<*l-i-1;j++){
           if(p[j]>p[j+1]){
               t=p[j];
               p[j]=p[j+1];
               p[j+1]=t;
           }
       }
        
    }
    
}