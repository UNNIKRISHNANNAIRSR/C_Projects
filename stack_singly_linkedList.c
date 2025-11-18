#include<stdioh>
#include<stdlib.h>
int choice=0,i,n;
struct node
{
    int data;
    struct node *next;
};
struct node *top=0,*newnode,*temp;
void push();
void pop();
void display();
void main(){
    printf("Enter a number:");
    scanf("%d",&n);
    while(choice!=4)
    {
        printf("=============================================\n");
        printf("selecct a choice:");
        printf("\n 1.PUSH \n 2.POP \n 3.DISPLAY \n 4.EXIT\n");
        printf("=============================================\n");
        printf("Choose the following:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            display();
            break;
            case 4:
            printf("Exting..........");
            break;
            default:
            printf("Invalid choice\n");
            printf("******************************************\n");
        }
    }
}