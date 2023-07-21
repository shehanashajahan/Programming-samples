#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
}*new_node,*temp;



struct node *head = NULL;
void create() {
    int n;
    printf("Enter the number of nodes to create: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        struct node *new_node = (struct node*) malloc(sizeof(struct node));
        printf("Enter the value of node:");
        scanf("%d", &(new_node->data));
        new_node->next = head;
        head = new_node;
    }
}

void display() {
    printf("List: ");
    struct node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void count() {
    int count = 0;
    struct node *temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    printf("Number of nodes: %d\n", count);
}
void insertatbeginning(){
    struct node *new_node = (struct node*) malloc(sizeof(struct node));
    printf("Enter the number to be added at the beginning:%d\n",insertatbeginning);
    scanf("%d",&new_node->data);
    new_node->next=head;
    head=new_node;
}
void insertend(){
    struct node *new_node = (struct node*) malloc(sizeof(struct node));
    printf("Enter the number to be added at the end:%d\n",insertend);
    scanf("%d",&new_node->data);
    new_node->next=NULL;
    temp=head;
    while(temp->next!=NULL)
    {
     temp=temp->next;
    }

    temp->next=new_node;

}
int main() {
    int choice;
    while (1) {
        printf("1. Create a linked list\n");
        printf("2. Display the linked list\n");
        printf("3. Count the number of nodes in the linked list\n");
        printf("4. insert at the beginning\n");
        printf("5.insert at the end\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                create();
                break;
            case 2:
                display();
                break;
            case 3:
                count();
                break;
            case 4:
                insertatbeginning();
                break;
            case 5:
                insertend();
                break;
            case 6:
                exit(0);
                break;
            default:
                printf("Invalid choice.\n");
                break;
        }
    }
}
