
#include <stdio.h>
int main()
{
    int num1;


    scanf("%d", &num1);

    num1 = (num1*63+7492)*5-498;

    printf("%d\n", num1 < 0 ? (-num1/10)%10 : (num1/10)%10);

    return 0;
}
