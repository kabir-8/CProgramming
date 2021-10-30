#include <stdio.h>
#include<string.h>
int main () {
   char str[50];
   char temp;

   printf("Enter a string : ");
   scanf("%[^\n]s",str);
    
int length=strlen(str);
for(int i=0,j=length-1;i<=j;i++,j--){
   temp=str[i];
   str[i]=str[j];
   str[j]=temp;
    
}
    printf("%s",str);
   return 0;
}