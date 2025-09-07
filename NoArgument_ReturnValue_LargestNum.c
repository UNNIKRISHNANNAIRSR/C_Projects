#include<stdio.h>
int largest();
int main()
{
    printf("Largest Number=%d",largest());
    return 0;
}
int largest()
{
    int a,b,c,result;
    printf("Enter Three Numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if((a>b && a>c))
        result=a;
    else if(b>c)
        result=b;
    else
        result=c;
    return result;
}