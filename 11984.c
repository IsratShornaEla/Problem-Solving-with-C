#include<stdio.h>
int main()
{
    int i,c,f,t;
    float F,C,f1;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&c,&f);
        F=(9*c)/5.0+32;

    f1=f+F;

    C=(5*(f1-32))/9.0;
    printf("Case %d: %.2f\n",i,C);
    }
    return 0;

}
