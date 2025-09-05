#include<stdio.h>
int main()
{
    int n,f1=0,f2=1,f3,i;
    printf("Enter a Number:");
    scanf("%d",&n);
    printf("Fibonacci Series = ");
    if(n==1)
    {
        printf("%d",f1);
    }
    else
    {
        printf("%d",f1);
        printf("%d",f2);
    }
    for(i=3;i<=n;i++)
    {
        f3=f1+f2;
        f1=f2;
        f2=f3;
        printf("%d",f3);
    }
    return 0;
}