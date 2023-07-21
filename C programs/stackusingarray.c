#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int stack[SIZE];
int top=-1,element;

void push(){
if(top==SIZE-1)
{

    printf("STACK IS OVERFLOW!\n");
}
else{
printf("ENTER THE ELEMENTS \n");
scanf("%d",&element);
top++;
stack[top]=element;
}
}
void pop(){
    if(top==-1)
    {

        printf("STACK IS UNDERFLOW!");
    }
    else{
        element=stack[top];
        top--;
        printf("%d\n",element);
    }
}
void peek(){
printf("%d",stack[top]);
}
void display()
{

    printf("THE ELEMENTS ARE:");
    int i;
    for(i=top;i>=0;i--)
    {

        printf("%d\n",stack[i]);
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
