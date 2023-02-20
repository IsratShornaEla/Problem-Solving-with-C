#include<stdio.h>

#include <math.h>
int main()
{
    int a,b,i,count=0,j,root;
    while(1)
    {
        scanf("%d %d",&a,&b);
        if(a==0 && b==0)
        {
            break;
        }
        for(i=a; i<=b; i++)
        {

            root= sqrt(i);
            if(root*root==i)
            {
                count++;
            }
        }

        printf("%d\n",count);
        count=0;

    }

    return 0;
}
