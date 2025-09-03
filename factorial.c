
#include<stdio.h>
int main()
{
    int f=1,i,n;
    printf("Enter a number to find factorial:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("Factorial=%d",f);
    return 0;
}
