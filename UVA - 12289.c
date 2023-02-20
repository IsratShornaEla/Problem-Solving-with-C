#include<stdio.h>
int main()
{
    char c[10];
    int i;
    int n;
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        int count=0;
        gets(c);
        if(strlen(c)==5)
        {
            printf("3\n");
        }
        else if(strlen(c)==3)
        {
            if(c[0]=='o')
            {
               count++;
            }
           if(c[0]=='o')
            {
               count++;
            }
           if(c[1]=='n')
            {
               count++;
            }
           if(c[2]=='e')
            {
               count++;
            }
            if(count>1)
            {
                printf("1\n");
            }
            else
            {
                printf("2\n");
            }

        }




    }
    return 0;
}
