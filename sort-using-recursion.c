#include<stdio.h>
int main(){
    int sort(int arr[],int n);
    int arr[10];
    int n;
    printf("Enter size:");
    scanf("%d",&n);
    printf("Enter elements of Array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
int sort(int arr[],int n)
{
    if(n==0)
    {
        return 0;
    }else
    {
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int t=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=t;
            }
        }
        return sort(arr,n-1);
    }
}