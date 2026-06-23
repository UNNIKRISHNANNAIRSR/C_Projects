#include<stdio.h>
#include<stdlib.h>
int choice=0,i;
struct node
{
    int data;
    struct node *next;
};
struct node *head,*temp,*newnode;
void display();
void begin_insert();
void last_insert();
void random_insert();
void begin_delete();
void last_delete();
void random_delete();
void search();
void main()
{
    while(choice!=9)
    {
        printf("\n_____________________________\n");
        printf("Select a Choice:");
        printf("\n 1.Insert at front \n 2.Insert at last \n 3.Random insert \n 4.Delete at front \n 5.Delete at last \n 6.Random delete \n 7.Search \n 8.Display \n 9.Exit \n " );
        printf("\n_____________________________\n");
        printf("\nChoose the following:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            begin_insert();
            break;

            case 2:
            last_insert();
            break;

            case 3:
            random_insert();
            break;

            case 4:
            begin_delete();
            break;

            case 5:
            last_delete();
            break;

            case 6:
            random_delete();
            break;

            case 7:
            search();
            break;

            case 8:
            display();
            break;

            case 9:
            printf("Exiting......");
            break;

            default:
            printf("Invalid Choice");
        }
    }
}
void begin_insert()
{
    newnode =(struct node*)malloc(sizeof(struct node));
    printf("\n Enter a number to insert at the begining of list:");
    scanf("%d",&newnode -> data);
    newnode -> next=head;
    head=newnode;
    printf("\n Node is Inserted \n");
}
void last_insert()
{
    newnode =(struct node*)malloc(sizeof(struct node));
    printf("\n Enter a number to insert at the end of list:");
    scanf("%d",&newnode -> data);
    newnode -> next=NULL;
    temp=head;
    printf("\n Node is Inserted \n");
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}
void random_insert()
{
    int loc;
    newnode =(struct node*)malloc(sizeof(struct node));
    printf("\n Enter a number to insert:");
    scanf("%d",&newnode -> data);
    printf("Enter a random location to insert that number:");
    scanf("%d",&loc);
    temp=head;
    for(i=1;i<loc;i++)
    {
        temp=temp->next;
    }
    if(loc>i)
    {
        printf("\n Invalid location \n");
    }
    else
    {
        newnode->next=temp->next;
        temp->next=newnode;
        printf("\n Node is inserted \n");
    }
}
void begin_delete()
{
    if(head==NULL)
    {
        printf("List is empty");
    }
    else
    {
        temp=head;
        head=head->next;
        free(temp);
    }
}
void last_delete()
{
   struct node *prvnode;
   temp=head;
   while(temp->next!=0)
   {
    prvnode=temp;
    temp=temp->next;
   }
   if(temp==head)
   {
    head=0;
   }
   else
   {
    prvnode->next=0;
   }
   free(temp);
   printf("Node is Deleted");
}
void random_delete()
{
   struct node *nextnode;
   int loc,i;
   printf("Enter a random location to delete that number:");
   scanf("%d",&loc);
   temp=head;
   for(i=1;i<=loc;i++)
   {
    nextnode=temp;
    temp=temp->next;
    if(temp==NULL)
    {
        printf("Can't Delete");
        return;
    }
   }
   nextnode->next=temp->next;
   free(temp);
   printf("Node is Deleted");
}
void search()
{
    int flag=0,n,i;
    printf("Enter element to search:");
    scanf("%d",&n);
    temp=head;
    for(i=1;temp!=NULL;i++)
    {
        if(n==temp->data)
        {
            flag=1;
            break;
        }
        else
        {
            temp=temp->next;
        }
    }
    if(flag==1)
    {
        printf("The number %d is at location: %d",n,i);
    }
    else{
        printf("The number %d is not on the list:",n);
    }
}
void display()
{
    temp=head;
    if(temp==NULL)
    {
        printf("\n List is empty");
        printf("\n There is nothing to print\n");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("\n %d",temp->data);
            temp=temp->next;
        }
    }
}