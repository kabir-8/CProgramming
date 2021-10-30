#include<ctype.h>
#include <stdio.h>
#include<string.h>
int main () {
   char str[50];
    int temp,count;
   printf("Enter a string : ");
   scanf("%[^\n]s",str);
    
   int length=strlen(str);
    int arr[26]={0};
    
    for(int i=0;i<length;i++){
        if (isspace(str[i]))
        {
            count++;
        }else
        {
        temp=str[i]-97;
    
        arr[temp]=arr[temp]+1;
        }
         
    }
    
    for(int n=97,i=0;i<26;i++,n++){
        
        printf("%c repeats %d times\n",n,arr[i]);
        }
    printf("space repeats %d times\n",count);
   return 0;
}