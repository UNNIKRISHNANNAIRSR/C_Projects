#include<stdio.h>
int main()
{
    int n,dig,rev=0,temp;
    printf("Enter numbers:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        dig=n%10;
        rev=rev*10+dig;
        n=n/10;
    }
    if(temp==rev)
        printf("%d is palindrom",rev);
    else
        printf("%d not an palindrome",rev);
return 0;
}