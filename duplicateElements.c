#include<stdio.h>
int main()
{
    int arr[100],i,n,ab[100],j;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Enter %d numbers:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
        if(arr[i]==arr[j])
        {
            ab[i]=arr[j];
        }
    }
}
        printf("Duplicate Numbers:");
   for(i=0;i<n;i++)
    {
        printf("%d\n",ab[i]);
    }
    return 0;
}


