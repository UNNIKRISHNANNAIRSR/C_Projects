#include<stdio.h>
void largest();
int main()
{
    largest();
    return 0;
}
void largest()
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
    printf("Largest Number=%d",result);
}