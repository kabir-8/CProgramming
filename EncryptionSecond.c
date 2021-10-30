#include<stdio.h>
#include<conio.h>
int main()
{
    char s[100];
    int count=0,flag=0,i=0;
    printf("Enter Your Message:\n");
    while(1)
    {
        s[count]=getchar();
        
            switch (s[count])
            {    
            case 'a':
                s[count]='l';
                break;
            case 's':
                s[count]='k';
                break;
            case 'd':
                s[count]='j';
                break;
            case 'f':
                s[count]='h';
                break;
            case 'l':
                s[count]='a';
                break;
            case 'k':
                s[count]='s';
                break;
            case 'j':
                s[count]='d';
                break;
            case 'h':
                s[count]='f';
                break;
            case 'q':
                s[count]='p';
                break;
            case 'w':
                s[count]='o';
                break;
            case 'e':
                s[count]='i';
                break;
            case 'r':
                s[count]='u';
                break;
            case 't':
                s[count]='y';
                break;
            case 'y':
                s[count]='t';
                break;
            case 'u':
                s[count]='r';
                break;
            case 'i':
                s[count]='e';
                break;
            case 'o':
                s[count]='w';
                break;
            case 'p':
                s[count]='q';
                break;
            case 'z':
                s[count]='m';
                break;
            case 'x':
                s[count]='n';
                break;
            case 'c':
                s[count]='b';
                break;
            case 'b':
                s[count]='c';
                break;
            case 'n':
                s[count]='x';
                break;
            case 'm':
                s[count]='z';
                break;
            case 'v':
                s[count]='g';
                break;
            case 'g':
                s[count]='v';
                break;

                //Capitals

            case 'A':
                s[count]='L';
                break;
            case 'S':
                s[count]='K';
                break;
            case 'D':
                s[count]='J';
                break;
            case 'F':
                s[count]='H';
                break;
            case 'L':
                s[count]='A';
                break;
            case 'K':
                s[count]='S';
                break;
            case 'J':
                s[count]='D';
                break;
            case 'H':
                s[count]='F';
                break;
            case 'Q':
                s[count]='P';
                break;
            case 'W':
                s[count]='O';
                break;
            case 'E':
                s[count]='I';
                break;
            case 'R':
                s[count]='U';
                break;
            case 'T':
                s[count]='Y';
                break;
            case 'Y':
                s[count]='T';
                break;
            case 'U':
                s[count]='R';
                break;
            case 'I':
                s[count]='E';
                break;
            case 'O':
                s[count]='W';
                break;
            case 'P':
                s[count]='Q';
                break;
            case 'Z':
                s[count]='M';
                break;
            case 'X':
                s[count]='N';
                break;
            case 'C':
                s[count]='B';
                break;
            case 'B':
                s[count]='C';
                break;
            case 'N':
                s[count]='X';
                break;
            case 'M':
                s[count]='Z';
                break;
            case 'V':
                s[count]='G';
                break;
            case 'G':
                s[count]='V';
                break;  
                //NUMBERS
            case '1':
                s[count]='0';
                break;
            case '2':
                s[count]='9';
                break;
            case '3':
                s[count]='8';
                break;
            case '4':
                s[count]='7';
                break;
            case '5':
                s[count]='6';
                break;
            case '6':
                s[count]='5';
                break;
            case '7':
                s[count]='4';
                break;
            case '8':
                s[count]='3';
                break;
            case '9':
                s[count]='2';
                break;
            case '0':
                s[count]='1';
                break;
            
            // case '?':
            //     s[count]='/';
            //     break;
            // case '/':
            //     s[count]='?';
            //     break;
            // case '.':
            //     s[count]='-';
            //     break;
            // case '-':
            //     s[count]='.';
            //     break;
                    
            case '\n':
                flag=1;
                break;    
             }
             if(flag==1){
                 break;
             }
            count++;
        
    }
    printf("Encrypted Message:\n");
   for(int i=0;i<count;i++){
       printf("%c",s[i]);
   } 
   printf("\n\nDecrypted Message:\n\n");
   for(int i=0;i<count;i++)
    {
    switch (s[i])
            { 
                   
            case 'a':
                s[i]='l';
                break;
            case 's':
                s[i]='k';
                break;
            case 'd':
                s[i]='j';
                break;
            case 'f':
                s[i]='h';
                break;
            case 'l':
                s[i]='a';
                break;
            case 'k':
                s[i]='s';
                break;
            case 'j':
                s[i]='d';
                break;
            case 'h':
                s[i]='f';
                break;
            case 'q':
                s[i]='p';
                break;
            case 'w':
                s[i]='o';
                break;
            case 'e':
                s[i]='i';
                break;
            case 'r':
                s[i]='u';
                break;
            case 't':
                s[i]='y';
                break;
            case 'y':
                s[i]='t';
                break;
            case 'u':
                s[i]='r';
                break;
            case 'i':
                s[i]='e';
                break;
            case 'o':
                s[i]='w';
                break;
            case 'p':
                s[i]='q';
                break;
            case 'z':
                s[i]='m';
                break;
            case 'x':
                s[i]='n';
                break;
            case 'c':
                s[i]='b';
                break;
            case 'b':
                s[i]='c';
                break;
            case 'n':
                s[i]='x';
                break;
            case 'm':
                s[i]='z';
                break;
            case 'v':
                s[i]='g';
                break;
            case 'g':
                s[i]='v';
                break;

                //Capitals

            case 'A':
                s[i]='L';
                break;
            case 'S':
                s[i]='K';
                break;
            case 'D':
                s[i]='J';
                break;
            case 'F':
                s[i]='H';
                break;
            case 'L':
                s[i]='A';
                break;
            case 'K':
                s[i]='S';
                break;
            case 'J':
                s[i]='D';
                break;
            case 'H':
                s[i]='F';
                break;
            case 'Q':
                s[i]='P';
                break;
            case 'W':
                s[i]='O';
                break;
            case 'E':
                s[i]='I';
                break;
            case 'R':
                s[i]='U';
                break;
            case 'T':
                s[i]='Y';
                break;
            case 'Y':
                s[i]='T';
                break;
            case 'U':
                s[i]='R';
                break;
            case 'I':
                s[i]='E';
                break;
            case 'O':
                s[i]='W';
                break;
            case 'P':
                s[i]='Q';
                break;
            case 'Z':
                s[i]='M';
                break;
            case 'X':
                s[i]='N';
                break;
            case 'C':
                s[i]='B';
                break;
            case 'B':
                s[i]='C';
                break;
            case 'N':
                s[i]='X';
                break;
            case 'M':
                s[i]='Z';
                break;
            case 'V':
                s[i]='G';
                break;
            case 'G':
                s[i]='V';
                break;  
                //NUMBERS
            case '1':
                s[i]='0';
                break;
            case '2':
                s[i]='9';
                break;
            case '3':
                s[i]='8';
                break;
            case '4':
                s[i]='7';
                break;
            case '5':
                s[i]='6';
                break;
            case '6':
                s[i]='5';
                break;
            case '7':
                s[i]='4';
                break;
            case '8':
                s[i]='3';
                break;
            case '9':
                s[i]='2';
                break;
            case '0':
                s[i]='1';
                break;
            // case '?':
            //     s[count]='/';
            //     break;
            // case '/':
            //     s[count]='?';
            //     break;
            // case '.':
            //     s[count]='-';
            //     break;
            // case '-':
            //     s[count]='.';
            //     break;    
            } 
             
            }


            for(int i=0;i<count;i++)
            {
                   printf("%c",s[i]);
            }
            
        
    
    return 0;
}