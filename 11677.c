#include<stdio.h>
int main()
{
    int H,M,h1,h2,m2,m1,i,j,k,l;

    while(scanf("%d %d %d %d",&h1,&m1,&h2,&m2)==4)
    {
        if(h1==0 && m1==0 && h2==0 && m2==0)
        {

            break;
        }

        if(h1<h2)
        {
            H=h2-h1;

        }
        else if(h1>=h2)
        {
            H=(24-h1)+h2;

        }
        if(m1>m2)
        {
            M=60-(m1-m2);
            H=H-1;
        }
        else if(m2>m1)
        {
            M=60-(m2-m1);

        }
        else
        {
            M=m1-m2;
        }
        i=H*60;
        j=i+M;
        printf("%d\n",j);
    }
    return 0;

}
