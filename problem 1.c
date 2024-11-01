#include<stdio.h>
int main()
{
    int m,n;
    while(1)
    {
        int s=1,z=1;
        scanf("%d %d",&m,&n);
        if(m==0 && n>0 )
        {
            for(int i=1;i<=n;i++)
            {
                s*=i;
            }
             printf("%d\n",s+1);
        }
        else if(n==0 && m>0)
        {
            for(int i=1;i<=m;i++)
            {
                s*=i;
            }
             printf("%d\n",s+1);
        }
       else if(m==0 && n==0)
        {
            printf("2");
        }
        else
        {
            for(int i=1,j=1;i<=m,j<=n;i++,j++)
            {
                s*=i;
                z*=j;
            }
              printf("%d\n",s+z);
        }
    }
        return 0;
    }
