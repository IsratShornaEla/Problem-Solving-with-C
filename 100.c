#include<stdio.h>
int main()
{
    int i,j,n,k,m,count=1,count1,temp=0;
    while( scanf("%d%d",&i,&j)==2 )
    {temp=0;
        printf("%d %d ",i,j);
        if(i>j)
        {
            m=j;
            j=i;
            i=m;
        }
        //without upper
        for(n=i; n<=j; n++)
        {
            count=1;

            k=n;
            while(k>1)
            {

                if(k%2==0)
                {
                    k=k/2;
                }
                else
                {
                    k=3*k+1;

                }

                count++;


            }


            if(count>=temp)
            {
                temp=count;
            }

        }
        printf("%d\n",temp);
    }

    return 0;
}
