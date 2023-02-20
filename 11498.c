#include<stdio.h>
int main()
{
    int k,m,i,n,x,y;
    while(1)
    {
        scanf("%d",&k);
        if(k==0)
        {
            break;
        }
        scanf("%d %d",&m,&n);
        for(i=0;i<k;i++)
        {
            scanf("%d %d",&x,&y);
            if(m==x || n==y)
            {
                printf("divisa\n");
            }
            else if(m<x)
            {
                if(n<y)
                {
                    printf("NE\n");
                }
                else
                {
                    printf("SE\n");
                }
            }
            else
            {
                if(n>y)
                {
                    printf("SO\n");
                }
                else
                {
                    printf("NO\n");
                }
            }

        }
    }
    return 0;
}
