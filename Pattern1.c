//     1
//    101
//   10101
//  1010101
// 101010101
#include<stdio.h>
int main()



{
    int n;
    scanf("%d",&n);
    int count=1;
    int space=n-1;
  

    for(int i=0;i<n;i++)
    {
        for(int i=0;i<space;i++)
        {
            printf(" ");
        }
        for(int i=0;i<count;i++)
        {
            if(i%2==0){
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        space--;
        count+=2;
        printf("\n");

    }


    return 0;
}