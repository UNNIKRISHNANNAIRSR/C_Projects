#include<stdio.h>
void largest(int n1,int n2,int n3);
int main()
{
int n1,n2,n3;
printf("Enter Three Numbers:");
scanf("%d%d%d",&n1,&n2,&n3);
largest(n1,n2,n3);
}
void largest(int a,int b,int c)
{
    int result;
    if(a>b && a>c)
        result=a;
    else if(b>c)
        result=b;
    else
        result=c;
    printf("Largest Number=%d",result);
}
