#include<stdio.h>
int main()
{
    int i,x[10];
    printf("Enter The Ten  Numbers:");
    for(i=0;i<10;i++){
        scanf("%d",&x[i]);
    }
    printf("Printing\n");
    for(i=0;i<10;i++){
        printf("%d\n",x[i]);
    }
    return 0;
}