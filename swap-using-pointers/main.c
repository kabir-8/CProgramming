/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b;
    int *x=&a;
    int *y=&b;
    scanf("%d %d",x,y);
    void swap(int *,int *);
    swap(x,y);
    printf("a=%d b=%d",a,b);
    
    

    return 0;
}

void swap(int *a,int *b){
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
