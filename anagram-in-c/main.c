#include <stdio.h>
int main()
{
char a[100];
int first[26] = {0}, second[26] = {0};
scanf("%[^\n]s",a);
char b[100]="this is a cow";

int i=0;
while (a[i] != '\0')
{
first[a[i]-97]++;
second[b[i]-97]++;
i++;
}
for(int n=97,i=0;i<26;i++,n++){
    printf("%c %d ",n,first[i]);
}
printf("\n");
for(int n=97,i=0;i<26;i++,n++){
    printf("%c %d ",n,second[i]);
}
printf("\n");

for (i = 0; i < 26; i++) {
        if (first[i] != second[i]) {
            printf("NOT ANAGRAM \n");
            return 0;
        } else {
            printf("ANAGRAM \n");
            return 0;
        }
    }
}



