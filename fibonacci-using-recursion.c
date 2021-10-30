#include<stdio.h>
int main(){
    int n;
    int fib(int n);
    printf("Enter position:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",fib(i));
    }
    return 0;
}
int fib(int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }else{
        return fib(n-1)+fib(n-2);
    }
}