#include<stdio.h>
struct item{
    char name[200];
    char code[200];
    int price;
}item1,item2,item3;
int main(){
  scanf("%s %s %s",item1.name,item2.name,item3.name);
  scanf("%s %s %s",item1.code,item2.code,item3.code);
  scanf("%d %d %d",&item1.price,&item2.price,&item3.price);

 if(item1.price>item2.price&&item1.price>item3.price){
        printf("obj1 is expensive");
    }else if(item2.price>item3.price&&item2.price>item1.price){
        printf("obj2 is expensive");
    }else if(item3.price>item2.price&&item3.price>item1.price){
        printf("item3 is expensive");
    }
    return 0;
}