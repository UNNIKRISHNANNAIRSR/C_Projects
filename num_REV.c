#include<stdio.h>
int main()
{
    int dig,rev=0,n;
    printf("Enter an nuber to reverse it:");
    scanf("%d",&n);
    while(n!=0)
    {
        dig=n%10;
        rev=rev*10+dig;
        n=n/10;
    }
    printf(" the reverse number is:%d",rev);
    return 0;
}



