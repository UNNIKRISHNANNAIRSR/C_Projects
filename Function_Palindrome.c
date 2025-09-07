#include<stdio.h>
int palindrome(int num);
int main()
{
    int num;
    printf("Enter The Number:");
    scanf("%d",&num);
    palindrome(num);
}
int palindrome(int num)
{
    int dig,rev=0,temp=num;
    while(num>0){
        dig=num%10;
        rev=rev*10+dig;
        num=num/10;
    }
    if(rev==temp)
    {
        printf("%d Is A Palindrome",temp);
    }
    else{
        printf("%d IS Not A Plaindrome",temp);
    }
}