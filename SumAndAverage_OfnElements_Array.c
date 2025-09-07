#include<stdio.h>
int main()
{
    int n,average,sum=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int x[n];
    printf("Enter %d Elements \n",n);
    for(int k=0;k<n;k++){
        scanf("%d",&x[k]);
    }
        for(int k=0;k<n;k++){
        sum+=x[k];
    }
    average=sum/n;
    printf("Sum =%d\n",sum);
    printf("Average =%d\n",average);
    return 0;
}