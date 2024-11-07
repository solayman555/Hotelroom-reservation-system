#include<stdio.h>
#include<string.h>

int main()
{
    int a;
    printf("\n\n\t\t\t");
    for(int i=0; i<47; i++)
    {
        printf("*");
        usleep(1000);
    }
    printf("\n");
    printf("    \t\t\t*                                             *\n");
    printf("    \t\t\t*                                             *\n");
    printf("    \t\t\t*\t   ");
    for(int i=0; i<25; i++)
    {
        printf("-");
        usleep(1000);
    }
    printf("\t      *");
    printf("\n");
    printf("    \t\t\t*          ");
    char b[]="| Welcome To DSC RESORT |";
  int l=strlen(b);
for(int i=0;i<l;i++)
{
    printf("%c",b[i]);
    usleep(100000);
}
    printf("\t      *\n");


    printf("    \t\t\t*\t   ");
    for(int i=0; i<25; i++)
    {
        printf("-");
        usleep(1000);
    }
    printf("\t      *");
    printf("\n");
    printf("    \t\t\t*                                             *\n");
    printf("    \t\t\t*                                             *\n");
    printf("\t\t\t");
    for(int i=0; i<47; i++)
    {
        printf("*");
        usleep(1000);
    }
    printf("\n\n");
    for(int i=1; i<115; i++)
    {
        printf("-");
        usleep(1000);
    }
    printf("\n\n");
    int c=1;
    printf("\t\t\t1.Admin\n");
    printf("\t\t\t2.Users\n");
    printf("\t\tEnter Your Choice : ");
    scanf("%d",&a);
    ////////////////////////
    switch(a)
    {
     case 1:
    {
        int pass[10];
    int passfile[10];
        FILE *password;
password=fopen("pass.txt","r");
    X:
        printf("\t\tEnter Your password: ");
scanf("%s",pass);
fscanf(password,"%s",passfile);
if(strcmp(passfile,pass)==0)
{
      for(int i=1; i<115; i++)
            {
                printf("~");
                usleep(1000);
            }

       printf("\n\t\t\t\tWelcome Admin");
            printf("\n\t\t\t\t-------------\n");
            printf("\t1.VIEW booking requests\n");
            printf("\t2.VIEW booked guests details\n");
            printf("\t3.ENTER new guest\n");
            printf("\t4.EXIT\n");

            int x;
            scanf("%d",&x);
            switch(x)
            {

            }
}

        else
        {
            printf("\n\t\tWrong password.Access Denied\n\t\tTry again....\n");
            c++;
            if(c==4)break;
            goto X;
        }
break;
    }
    case 2:
        printf("\nHello user and welcome to DSC RESORT\n");
                printf("1.view available rooms\n");
   	            printf("2.request booking of room\n");
        printf("Enter your choice: ");
                scanf("%d",&c);
                switch(c)
                {
                case 1:
            {

            }
                case 2:

{

}

                }
    }
    return 0;
}

