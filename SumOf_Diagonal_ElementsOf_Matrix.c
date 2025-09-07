#include<stdio.h>
int main()
{
    int i,j,a[3][3],sum;
    printf("Enter The Elements:");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    sum = 0;
    for(i=0;i<3;i++) {
        sum = sum + a[i][i];
    }
    printf("The Sum Of First Diagonal Elements In The Matrix Is:%d\n",sum);
    sum = 0;
    for(i=0;i<3;i++) {
        sum = sum + a[i][3-1-i];
    }
    printf("The Sum Of Second Diagonal Elements In The Matrix Is:%d\n",sum);
    return 0;
}