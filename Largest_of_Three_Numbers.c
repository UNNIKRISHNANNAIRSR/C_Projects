#include<stdio.h>
int main()
{
    int a,b,c,L;
    printf("Enter Three Numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if((a>b)&&(a>c))
        L=a;
    else if(b>c)
        L=b;
    else
        L=c;
    printf("The Largest Number Is: %d" ,L);
    return 0;
}