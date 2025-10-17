#include<stdio.h>
void power()
{
    int a,b,pow=1;
    printf("enter two nos:\n");
    scanf("%d%d",&a,&b);
    for(int i=1;i<=b;i++)
    {
        pow=pow*a;
    }
    printf("the answer is %d",pow);
}
void main()
{
    power();
}
