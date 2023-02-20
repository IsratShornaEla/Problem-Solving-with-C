#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{

    int i,j,n;
    double t1,t2,t,d,v,u,a;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%lf %lf %lf",&d,&v,&u);
        if(v==0 || u == 0 || v >=u)
        {
            printf("Case %d: can't determine\n",i+1);

        }
        else
        {
a=sqrt(u*u-v*v);
            t1=d/(a);
            t2=d/(u);
            t=t1-t2;

            printf("Case %d: %.3lf\n",i+1,t);
        }

    }
    return 0;

}
