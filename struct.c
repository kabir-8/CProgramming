#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person{
    char name[30];
    char address[30];
    unsigned long long int phoneNumber;
    char nationality[30];
};

int main(){
    struct person p,p1;
    printf("What is the person's name?\n");
    gets(p.name);
    printf("What is the person's address?\n");
    gets(p.address);
    printf("What is the person's phone number?\n");
    scanf("%llu", &p.phoneNumber);
    printf("What is the person's nationality?\n");
    scanf(" %s", p.nationality);
    printf("What is the person's name?\n");
    scanf("%s",p1.name);
    printf("What is the person's address?\n");
    scanf("%s",p1.address);
    printf("What is the person's phone number?\n");
    scanf("%llu", &p1.phoneNumber);
    printf("What is the person's nationality?\n");
    scanf(" %s", p1.nationality);

    printf("The person's name is %s\n", p.name);
    printf("The person's address is %s\n", p.address);
    printf("The person's phone number is %llu\n", p.phoneNumber);
    printf("The person's nationality is %s\n", p.nationality);
    printf("The person's name is %s\n", p1.name);
    printf("The person's address is %s\n", p1.address);
    printf("The person's phone number is %llu\n", p1.phoneNumber);
    printf("The person's nationality is %s\n", p1.nationality);
    return 0;
}