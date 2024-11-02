#include<stdio.h>
int main()
{
    int a;
    printf("\n\n\t\t\t***********************************************\n");
    printf("    \t\t\t*                                             *\n");
    printf("    \t\t\t*                                             *\n");
    printf("    \t\t\t*          -------------------------          *\n");
    printf("    \t\t\t*          | Welcome to DSC RESORT |          *\n");
    printf("    \t\t\t*          -------------------------          *\n");
    printf("    \t\t\t*                                             *\n");
    printf("    \t\t\t*                                             *\n");
    printf("    \t\t\t***********************************************\n");
    printf("---------------------------------------------------------------------------------------------------------------------\n");
    printf("1.Admin\n");
    printf("2.Users\n");
    printf("Enter Your Choice : ");
    scanf("%d",&a);
    switch(a)
    {
    case 1:{
char pass[100];
printf("Enter Your password : ");
        scanf("%s",&pass);
        if(strcmp(pass,"admin")==0)
        {
            printf("\t\t\tWelocome Dear Admin");
        }
        else
        {
          printf("Wrong password,Access Denied");
        }
   break;
    }
     //  case 2:
        //   user
    }
    return 0;
}

