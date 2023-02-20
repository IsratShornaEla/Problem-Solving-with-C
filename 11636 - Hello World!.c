#include<stdio.h>
#include<math.h>
int main()
{
    int x=1,y=0,i,n;
    while(scanf("%d",&n)==1 && (n>=0))
    {
        y=0;

        if(n==1)
        {
            printf("Case %d: %d\n",x,y);
        }
        else
        {
            for(i=1; i<n; i++)
            {

                if(pow(2,i)>=n)
                {
                    y=i;
                    break;
                }

            }
            printf("Case %d: %d\n",x,y);
        }
        x++;

    }
    return 0;
}

