#include<stdio.h>
int main()
{
    int a;
    printf("\n\n\t\t\t");
    for(int i=0;i<47;i++)
    {
        printf("*");
        usleep(1000);
    }
    printf("\n");
    printf("    \t\t\t*                                             *\n");
    printf("    \t\t\t*                                             *\n");
    printf("    \t\t\t*\t   ");
 for(int i=0;i<25;i++)
    {
        printf("-");
        usleep(1000);
    }
    printf("\t      *");
    printf("\n");
    printf("    \t\t\t*          ");
    char b[]= {'|',' ','W','e','l','c','o','m','e',' ','T','o',' ','D','S','C',' ','R','E','S','O','R','T',' ','|'};
    for(int i=0; i<25; i++)
    {
        printf("%c",b[i]);
        usleep(100000);
    }
printf("\t      *\n");


    printf("    \t\t\t*\t   ");
 for(int i=0;i<25;i++)
    {
        printf("-");
        usleep(1000);
    }
    printf("\t      *");
printf("\n");
    printf("    \t\t\t*                                             *\n");
    printf("    \t\t\t*                                             *\n");
     printf("\t\t\t");
    for(int i=0;i<47;i++)
    {
        printf("*");
        usleep(1000);
    }
    printf("\n\n");
    for(int i=1;i<115;i++){
    printf("-");
        usleep(1000);
    }
    printf("\n\n");
    printf("\t\t\t1.Admin\n");
    printf("\t\t\t2.Users\n");
    printf("\t\tEnter Your Choice : ");
    scanf("%d",&a);
    switch(a)
    {
    case 1:{
char pass[10];
printf("\t\tEnter Your password : ");
        scanf("%s",&pass);
        if(strcmp(pass,"admin")==0)
        {
               for(int i=1;i<115;i++){
    printf("-");
        usleep(1000);
    }
            printf("\n\t\t\t\tWelcome Dear Admin");
            printf("\n\t\t\t\t------------------");
            
        }
        else
        {
          printf("\n\n\t\tWrong password,Access Denied");
        }
   break;
    }
     //  case 2:
        //   user
    }
    return 0;
}

