#include<stdio.h>
int main()
{
    int s(int arr[],int lmid,int rmid,int n,int key);
    int arr[10];
    int i,key,n,ans,lmid,rmid;
    printf("Enter Size:");
    scanf("%d",&n);
    printf("Enter Elements of Array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter key:");
    scanf("%d",&key);
    lmid=(n/2);
    rmid=(n/2);
    ans=s(arr,lmid,rmid,n,key);
    printf("%d",ans);
    return 0;
}
int s(int arr[],int lmid,int rmid,int n,int key)
{
    if(key==arr[lmid])
    {
        return lmid;
    }
    else if(key==arr[rmid])
    {
        return rmid;
    }
    else
    {
        s(arr,lmid-1,rmid+1,n,key);
    }
}