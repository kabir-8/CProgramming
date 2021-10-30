// *****
// ****
// ***
// **
// *
// **
// ***
// ****
// *****
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int star=(n/2)+1;
    int restart=2;
    for(int i=0;i<n;i++)
    {
        if(star>1)
        {
        for(int i=0;i<star;i++)
        {
            printf("*");
        }
        star--;
        }
        else
        {
            for(int i=1;i<restart;i++)
            {
                printf("*");
            }
            restart++;
        }
        printf("\n");
    }

    return 0;
}