#include<stdio.h>
struct first
{
    int age;
    char name[20];
    float score;
};
int main()
{
    struct first obj1;
    printf("Enter name\n");
    
        gets(obj1.name);
    
    printf("Enter Age");
    scanf("%d",&obj1.age);
    printf("Enter Score:\n");
    scanf("%f",&obj1.score);
    
    printf("\n%s %d %.2f",obj1.name,obj1.age,obj1.score);


    return 0;
}