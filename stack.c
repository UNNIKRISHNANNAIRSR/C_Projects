#include<stdio.h>
int stack[100],j,choice=0,n,top=-1;
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
void push()
{
    int val;
    if(top==n-1){
        printf("OVERFLOW!\n");
    }
    else{
        printf("\n Enter a number to push in to stack:");
        scanf("%d",&val);
        top=top+1;
        stack[top]=val;
        printf("The number %d is inserted in to the stack \n",val);
    }
}
void pop()
{
    int i;
    if(top==-1){
        printf("UNDERFLOW!\n");
    }
    else{
        i=stack[top];
        top=top-1;
        printf("The poped element is : %d\n",i);
    }
}
void display()
{
    if(top==-1){
        printf("There is no values in the stack to display \n");
    }
    else{
        printf("\n The numbers in the stack are:\n");
        for(j=top;j>=0;j--){
            printf("%d\n",stack[j]);
        }
    }
}
