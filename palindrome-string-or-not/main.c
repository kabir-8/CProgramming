#include <stdio.h>
#include<string.h>
int main () {
   char str[50];

   printf("Enter a string : ");
   scanf("%[^\n]s",str);
    
int length=strlen(str);
for(int i=0;i<(length/2);i++){
    if(str[i]!=str[length-1-i]){
        printf("NOT PALINDROME");
        return 0;
    }
    
}
    printf("PLAINDROME");
   return 0;
}
