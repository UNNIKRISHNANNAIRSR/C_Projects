#include<stdio.h>
int main()
{
    int num,i,count=0;
    printf("Enter The Number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }
if(count==2)
    printf(" The Number is Prime");
else
    printf(" Not a Prime Number!!!");
return 0;
}