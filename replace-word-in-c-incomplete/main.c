/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[100],key[100],temp[100],new[100],result[100];
    int bridge;
    printf("Enter String:");
    scanf("%[^\n]s",str);
    printf("Enter Key:");
    scanf("%s",key);
    printf("Enter New Word:");
    scanf("%s",new);
    int keyl=strlen(key);
    int strl=strlen(str);
    int newl=strlen(new);
    int gap=newl-keyl;
    int end=strl;
    for(int i=0;i<strl;i++){
        strncpy(temp,&str[i],keyl);
        if(strcmp(key,temp)==0){
            for(int j=0;j<i;j++){
                result[j]=str[j];
                bridge=j;
            }
            strcat(result,new);
            
            for(int k=bridge+keyl+1,l=bridge+newl+1;k<strl;k++,l++){
                result[l]=str[k];
            }
             end=end+(newl);
             str[end]='\0';
            strcpy(str,result);
            }
            
        }
    
    
    
    
    printf("%s",result);
    return 0;
}
