#include <stdio.h>
int main()
{
    int test,stu,sped;
    scanf("%d",&test);
    int i,j;
    for(i=0;i<test;i++)
    {
        int count=0;
        scanf("%d",&stu);
        for(j=0;j<stu;j++)
        {
            scanf("%d",&sped);
             if(sped>count)
             {
                 count=sped;
             }
        }
        printf("Case %d: %d\n",i+1,count);
    }
    return 0;
}
