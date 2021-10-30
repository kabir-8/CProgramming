#include<stdio.h>
struct abc{
    char name[10];
    int price;
    int productitem;
};
int main(){
    struct abc obj1={"car",2000,12};
    struct abc obj2={"bike",500,121};
    struct abc obj3={"Helicopter",6000,100};
    if(obj1.price>obj2.price&&obj1.price>obj3.price){
        printf("obj1 is expensive");
    }else if(obj2.price>obj3.price&&obj2.price>obj1.price){
        printf("obj2 is expensive");
    }else if(obj3.price>obj2.price&&obj3.price>obj1.price){
        printf("obj3 is expensive");
    }
    return 0;
}