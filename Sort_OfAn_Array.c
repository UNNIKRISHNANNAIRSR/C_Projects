#include<stdio.h>
int main()
{
    int n,num[10],temp,i,j;
    printf("Enter The Limit:");
    scanf("%d",&n);
    printf("Enter The %d Numbers:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(num[i]>num[j])
            {
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
    printf("The Numbers Are:");
    for(i=0;i<n;i++){
        printf("%d\n",num[i]);
    }
    return 0;
    }