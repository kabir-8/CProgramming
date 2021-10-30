#include<stdio.h>
struct menu
{
    char name[10];
    float price;
}obj[5],temp;
int main()
{
    int i;
    printf("Name  Price\n");
    for(i=0;i<5;i++)
    {
        scanf("%s %f",obj[i].name,&obj[i].price);
    }

    for(i=0;i<5;i++)
    {
        for(int j=0;j<5-i-1;j++)
        {
            if(obj[j].price>obj[j+1].price)
            {
                temp=obj[j];
                obj[j]=obj[j+1];
                obj[j+1]=temp;

            }
        }
    }

    for(int i=0;i<5;i++)
    {
        printf("%s %.2f",obj[i].name,obj[i].price);
        printf("\n");
    }




    return 0;
}