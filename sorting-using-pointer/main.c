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
    int *n=&size;
    int **n1=&n;
    printf("Enter Array Size:");
    scanf("%d",n);
    printf("Enter Array Elements:");
    for(i=0;i<**n1;i++){
        scanf("%d",arr);
        *arr++;
    }
    arr=array;
    for(i=0;i<**n1;i++){
       for(int j=0;j<size-i-1;j++){
           if(array[j]>array[j+1]){
               int t=array[j];
               array[j]=array[j+1];
               array[j+1]=t;
           }
       }
        
    }
    
    for(int i=0;i<**n1;i++){
        printf("%d ",array[i]);
    }
    
    

    return 0;
}
