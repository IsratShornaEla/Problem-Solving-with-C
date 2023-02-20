#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,y,z,t,i,j,temp;
    while((scanf("%d",&t))==1)
{
    for(j=1; j<=t; j++)
        {

            scanf("%d %d %d",&x,&y,&z);
            if((x>y&&x<z) || (x<y&&x>z))
            {
                printf("Case %d: %d\n",j,x);
            }
            else if((y>x&&y<z)|| (y<x && y>z))
            {
                printf("Case %d: %d\n",j,y);
            }
            else if((z>x &&z<y)||(z<x&&z>y))
            {
                printf("Case %d: %d\n",j,z);
            }
        }
    }
    return 0;
}
