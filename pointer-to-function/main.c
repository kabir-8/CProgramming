/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   
   int sum(int,int);
   int mul(int,int);
   int divi(int,int);
   float average(int,int);
   int (*m)(int,int)=&mul;
   int (*d)(int,int)=&divi;
   float (*a)(int,int)=&average;
   int (*s)(int,int)=&sum;
   int ans1=(*s)(10,20);
   float ans2=(*a)(10,25);
   int ans3=(*d)(10,2);
   int ans4=(*m)(10,20);
   printf("%d %.2f %d %d",ans1,ans2,ans3,ans4);
    return 0;
}
int sum(int a,int b){
    return a+b;
}
int divi(int a,int b){
    return a/b;
}
float average(int a,int b){
  return (a+b)/2.0;
}
int mul(int a,int b){
    return a*b;
}
