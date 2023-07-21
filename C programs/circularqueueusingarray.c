#include<stdio.h>
#include<stdlib.h>
#define max 5

int queue[max];
int front=-1,rear=-1;

void enqueue(int element){
if(front==-1&&rear==-1)
{

    front=rear=0;
    queue[rear]=element;
}
else if((rear+1)%max==front){

printf("QUEUE IS OVERFLOW");
}
else{
    rear=(rear+1)%max;
    queue[rear]=element;
}
}
void dequeue()
{
    if(front==-1&&rear==-1){
        printf("\n QUEUE IS EMPTY");
    }
    else if(front==rear){
        front=rear=-1;
        printf("%d",queue[front]);
    }
    else{
        printf("%d",queue[front]);
        front=(front+1)%max;
    }
}
void display(){
    int i=front;
    if(front==-1&&rear==-1){
        printf("QUEUE IS EMPTY");
    }
    else{
        printf("THE ELEMENTS OF THE QUEUE ARE:\n");
        while(i!=rear){
            printf("%d\t",queue[i]);
            i=(i+1)%max;
             }
             printf("%d\t",queue[i]);
            }
        }
int main()
{
    int element;
    int choice;
    while (1)
    {
        printf("\nMenu \n");
        printf("1. enqueue the element\n");
        printf("2. dequeue the element\n");
        printf("3. display the elements\n");
        printf("4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            scanf("%d",&element);
            enqueue(element);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Invalid choice.\n");
            break;
        }
    }
}
