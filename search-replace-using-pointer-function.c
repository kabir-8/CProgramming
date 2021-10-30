#include<stdio.h>
int main()
{
    int se(int *arr,int *n,int *key);
    int n,key,i;
    int array[100];
    int *arr=array;
    int *keyptr=&key;
    printf("Enter Size of Array:");
    scanf("%d",&n);
    printf("Enter Elements of Array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",arr);
        arr+=1;
    }
    arr=array;
    printf("Enter Key:");
    scanf("%d",keyptr);
    se(arr,&n,&key);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}

int se(int *arr,int *n,int *key)
{
    for(int i=0;i<*n;i++){
        if(arr[i]==*key){
            arr[i]=999;
        }
    }
}