#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*newnode,*temp,*front=NULL,*rear=NULL;

void enqueue();
void dequeue();
void peek();
void display();

void enqueue(){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("ENTER THE DATA\n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(front==NULL && rear==NULL)
{
    front=newnode;
    rear=newnode;
}
else{
    rear->next=newnode;
    rear=newnode;
}
}

void dequeue()
{
    temp=front;
    if(front==NULL && rear==NULL)
    {
        printf("\n QUEUE IS EMPTY");
    }
    else
    {
        printf("\n%d is deleted",front->data);
        front=front->next;
        free(temp);
    }
}

void peek()
{
    if(front==NULL&&rear==NULL)
    {
        printf("QUEUE IS EMPTY!");
    }
    else
    {
        printf("\n%d is displayed",front->data);
    }
}

void display()
{
    temp=front;
    if(front==NULL&&rear==NULL)
    {

        printf("QUEUE IS EMPTY");

    }
    else
    {
        while(temp!=NULL)
        {
            printf("\n ELEMENTS IN STACK %d",temp->data);
            temp=temp->next;
        }
    }
}
int main()
{
    int data;
    int choice;
    while (1)
    {
        printf("1. push the element\n");
        printf("2. pop the element\n");
        printf("3. peek the elements\n");
        printf("4. display the elements\n");
        printf("5.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Invalid choice.\n");
            break;
        }
    }
}
