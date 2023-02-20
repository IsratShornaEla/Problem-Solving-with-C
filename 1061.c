#include<stdio.h>
int main ()
{
    char s[10];
    int n,sec1,sec2,beg,end,beghr,endhr,begmnt,endmit,begsec,endsec;
    acsnf("%s",&s);
    scanf("%d %s %d %s %d %s %d ",&beg,&s,&s,&s,&beghr,&begmnt,&begsec);
    acsnf("%s",&s);
    scanf("%d %s %d %s %d %s %d ",&end,&s,&s,&s,&endhr,&endmnt,&endsec);
    sec1=begsec+(begmnt*60)+(beghr*3600)+(beg*24*3600);
 sec2=endsec+(endmnt*60)+(endhr*3600)+(end*24*3600);
    day=(sec2-sec1)/


}
