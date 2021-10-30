/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<string.h>
#include <ctype.h>
#include <stdio.h>

int main()
{
    char str[100];
    int temp;
    int wordcount=1,lettercount=0,numbercount=0;
   printf("Enter a string : ");
   scanf("%[^\n]s",str);
   int length=strlen(str);
   for(int i=0;i<length;i++){
       temp=str[i];
       if(temp>47&&temp<58){
           numbercount++;
       }else if(temp>=97&&temp<=122){
           lettercount++;
       }else if(isspace(str[i])){
           wordcount++;
       }
   }
   printf("WORD %d\nLETTER %d\nNUMBER %d\n",wordcount,lettercount,numbercount);

    return 0;
}
