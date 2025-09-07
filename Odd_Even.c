#include<stdio.h>
int main()
{
    int n1,n2,i;
    int oddeven(int n1,int n2);
    printf("Enter The Starting Number:");
    scanf("%d",&n1);
    printf("Enter The Ending Number:");
    scanf("%d",&n2);
    oddeven(n1,n2);
    return 0;
}
int oddeven(int n1,int n2)
{
    int i;
    printf("Even Numbers:\n");
    for(i=n1;i<=n2;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
    }
    printf("Odd Numbers:\n");
    for(i=n1;i<=n2;i++)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
        }
    }
}