#include<stdio.h>
int main()
{
    int area,length,breadth;
    printf("Enter The Length Of Rectangle:");
    scanf("%d",&length);
    printf("Enter The Breadth Of Rectangle:");
    scanf("%d",&breadth);
    area=length*breadth;
    printf("The Area Of The Rectangle Is:%d",area);
    return 0;
}