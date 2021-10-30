#include<stdio.h>
#include<conio.h>
int main()
{
    char msg[100];
    
    int count=0,gap,j=0;
    printf("Enter your message\n");
    while(1){
        msg[count]=getchar();
        if(msg[count]=='\n')
        {
            break;
        }
        count++;
    }
    printf("Enter Encryption Key:");
    scanf("%d",&gap);
    printf("\n##ENCRYPTED MESSAGE SENT##\n\n");
    while(j<count)
    {
        int temp=msg[j];
        if(msg[j]==' ')
        {
            msg[j]='*';
            printf("*");
            j++;
        }else if(msg[j]>='a'&&msg[j]<='z')
        {
            int temp=msg[j];
            temp=temp+gap;
            if(temp>=123)
            {
                temp=temp-122+96;
            }
            msg[j]=temp;
            printf("%c",msg[j]);
            j++;
        }else if(msg[j]>='A'&&msg[j]<='Z')
        {
            int temp=msg[j];
            temp=temp+gap;
            if(temp>=91)
            {
                temp=temp-90+64;
            }
            msg[j]=temp;
            printf("%c",msg[j]);
            j++;
        }

    }
    printf("\n\nDo You Want To Decrypt it??\n(Y/N)");
    char dec;
    // dec = getch();
   dec= getchar();
    printf("\n%c\n",dec);
    if(dec=='n'||dec=='N'){
        printf("OK...TATA...BYE BYE :(");
        return 0;
    }
    if(dec=='Y'||dec=='y')
    {
        j=0;
        while(j<count)
        {
        int temp=msg[j];
        if(msg[j]=='*')
        {
            msg[j]=' ';
            printf(" ");
            j++;
        }else if(msg[j]>='a'&&msg[j]<='z')
        {
            int temp=msg[j];
            temp=temp-gap;
            if(temp<=96)
            {
                temp=temp+122-96;
            }
            msg[j]=temp;
            printf("%c",msg[j]);
            j++;
        }else if(msg[j]>='A'&&msg[j]<='Z')
        {
            int temp=msg[j];
            temp=temp-gap;
            if(temp<=64)
            {
                temp=temp+90-64;
            }
            msg[j]=temp;
            printf("%c",msg[j]);
            j++;
        }

    }
    }
    return 0;
}