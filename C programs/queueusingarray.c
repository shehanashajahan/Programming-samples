#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int queue[SIZE];
int front=-1,rear=-1,element;

void enqueue(){
if(rear==SIZE-1)
{

    printf("STACK IS OVERFLOW!\n");
}
else if(front==-1 &&rear==-1){
        front=rear=0;
printf("ENTER THE ELEMENTS \n");
scanf("%d",&element);
queue[rear]=element;
}
else{
    rear++;
    printf("\n ENTER NEW NUMBER TO INSERT:");
    scanf("%d",&element);
    queue[rear]=element;
}
}
void dequeue()
{
    int element;
    if(front==-1&&rear==-1){
        printf("\n QUEUE IS EMPTY");
    }
    else if(front==rear){
        front=rear=-1;
    }
    else{
        printf("%d",queue[front]);
        front++;
    }
}
void peek(){
printf("%d",queue[front]);
}
void display()
{
    int i;
    if(front==-1 && rear==-1){
        printf("\n QUEUE IS EMPTY!");
    }
    else{

    }
    for(i=front;i<=rear;i++)
    {

        printf("%d\n",queue[i]);
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
