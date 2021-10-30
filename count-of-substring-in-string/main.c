/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <string.h>

#include <stdio.h>

int main()
{
   char str[100],key[100],temp[100];
   int count=0;
   printf("ENTER STRING:");
   scanf("%[^\n]s",str);
  int length=strlen(str);
   printf("Enter Key:");
   scanf("%s",key);
  int keylength=strlen(key);
 
       for(int i=0;i<length;i++){
           strncpy(temp, &str[i], keylength);
           int res=strcmp(temp,key);
           if(res==0){
              count++;
             
           }
       }
    printf("%d",count);

   

    return 0;
}
