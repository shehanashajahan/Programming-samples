#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *tail=NULL;
void create() {
    int n;
    printf("Enter the number of nodes to create: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        struct node *new_node = (struct node*) malloc(sizeof(struct node));
        printf("Enter the value of node:");
        scanf("%d", &(new_node->data));
        new_node->next = NULL;
        if(head==NULL){
            head=new_node;
            tail=new_node;
        }
        else{
            tail->next=new_node;
            tail=new_node;
            tail->next=head;
        }
    }
}

void display() {
    printf("List: ");
    struct node *temp = head;
    do{
        printf("%d ", temp->data);
        temp = temp->next;
    }while(temp!= head);
    printf("\n");
}

void insert(){
    struct node *new_node = (struct node*) malloc(sizeof(struct node));
    printf("Enter the number to be added at the beginning:%d\n",insert);
    scanf("%d",&new_node->data);
    new_node->next=head;
    head=new_node;
}

int main() {
    int choice;
    while (1) {
        printf("1. Create a linked list\n");
        printf("2. Display the linked list\n");
        printf("3. insert \n");
        printf("4. Exit\n");
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
                insert();
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
