#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*top=NULL,*newnode,*temp;

void push();
void pop();
void peek();
void display();

void push(){
    newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    newnode->next=top;
    top=newnode;
}

void pop()
{
    temp=top;
    if(top==NULL)
    {
        printf("STACK IS EMPTY");
    }
    else
    {
        printf("\n%d is deleted",top->data);
        top=top->next;
        free(temp);
    }
}

void peek()
{
    if(top==NULL)
    {
        printf("STACK IS EMPTY!");
    }
    else
    {
        printf("\n%d is displayed",top->data);
        top=top->next;
    }
}

void display()
{
    temp=top;
    if(top==NULL)
    {

        printf("STACK IS EMPTY");
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
            push();
            break;
        case 2:
            pop();
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
