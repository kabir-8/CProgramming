//     *
//    ***
//   *****
//  *******
// *********
//***********
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int counter=1;
    int space=n-1;
    for(int i=0;i<n;i++)
    {   
        for(int i=0;i<space;i++)
        {
            printf(" ");
        }
        for(int i=0;i<counter;i++)
        {
            printf("*");
        }
        counter+=2;
        space--;
        printf("\n");
   }

    return 0;
}
  