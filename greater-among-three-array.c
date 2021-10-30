#include<stdio.h>
struct abc{
    char name[10];
    float price;
    int productitem;
}obj[3];
int main(){
    int i;
    float maxarr=-99.00;
    int counter=-1;
    printf("Name  Price   Product-ID\n");
    for(i=0;i<3;i++)
    {
        scanf("%s %f %d",obj[i].name,&obj[i].price,&obj[i].productitem);
    }

    for(i=0;i<3;i++)
    {
        if(obj[i].price>maxarr)
        {
            maxarr=obj[i].price;
            counter=i;
        }
    }
   printf("%s %.2f %d",obj[counter].name,obj[counter].price,obj[counter].productitem);
    return 0;
}