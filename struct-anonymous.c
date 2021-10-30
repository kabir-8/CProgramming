#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct {
    char name[30];
    char address[30];
    unsigned long long int phoneNumber;
    char nationality[30];
}p;

int main(){
    struct p;
    printf("What is the person's name?\n");
    scanf("%s",p.name);
    printf("What is the person's address?\n");
    scanf("%s",p.address);
    printf("What is the person's phone number?\n");
    scanf("%llu", &p.phoneNumber);
    printf("What is the person's nationality?\n");
    scanf(" %s", p.nationality);
    

    printf("The person's name is %s\n", p.name);
    printf("The person's address is %s\n", p.address);
    printf("The person's phone number is %llu\n", p.phoneNumber);
    printf("The person's nationality is %s\n", p.nationality);
   
    return 0;
}