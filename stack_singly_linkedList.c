#include<stdio.h>
#include<stdlib.h>
int choice=0,i;
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
    printf("\n __________Stack using linkedlist__________\n");
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
void push()
{
    newnode = (struct node*) malloc(sizeof(struct node ));
    printf("\n Enter a number to insert in the stack:");
    scanf("%d",&newnode->data);
    newnode->next=top;
    top=newnode;
    printf("The number '%d' is inserted in to the stack \n ",newnode->data);
}
void pop()
{
    temp=top;
    if(top==NULL)
    {
        printf("UNDERFLOW\n");
    }
    else{
        printf("\n The poped element is %d\n",top->data);
        top=top->next;
        free(temp);
    }
}
void display(){
    temp=top;
    if(temp==NULL)
    {
        printf("\n There is no value to print\n");
    }
    else{
        printf("\n The numbers in the stack are: \n");
        while(temp!=NULL){
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }
}