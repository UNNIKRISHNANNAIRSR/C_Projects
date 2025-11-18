#include<stdio.h>
int queue[100],j,choice=0,n,front=-1,rear=-1;
void enqueue();
void dequeue();
void display();
void main(){
    printf("Enter a number:");
    scanf("%d",&n);
    while(choice!=4)
    {
        printf("=============================================\n");
        printf("selecct a choice:");
        printf("\n 1.ENQUEUE \n 2.DEQUQUE \n 3.DISPLAY \n 4.EXIT\n");
        printf("=============================================\n");
        printf("Choose the following:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
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
void enqueue()
{
    int val;
    if(rear==n-1){
        printf("OVERFLOW!\n");
    }
    else{
        printf("\n Enter a number to push in to Queue:");
        scanf("%d",&val);
        if(front==-1){
            front=front+1;
        }
            rear=rear+1;
            queue[rear]=val;
            printf("The number %d is inserted in to the queue \n",val);
        }
    }
void dequeue()
{
    int i;
    if(front==-1 || front>rear){
        printf("UNDERFLOW!\n");
    }
    else{
        i=queue[front];
        front=front+1;
        printf("The dequeued element is : %d\n",i);
    }
}
void display()
{
    if(front==-1 || front>rear){
        printf("Queue is empty \n");
    }
    else{
        printf("\n The numbers in the queue are:\n");
        for(j=front;j<=rear;j++){
            printf("%d\n",queue[j]);
        }
    }
}
