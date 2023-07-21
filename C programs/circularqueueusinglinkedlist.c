#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* next;
} Node;

Node* front = NULL;
Node* rear = NULL;

void enqueue(int element) {
    Node* new_node = (Node*) malloc(sizeof(Node));
    new_node->data = element;
    new_node->next = NULL;

    if (rear == NULL) {
        rear = new_node;
        front = new_node;
    } else {
        rear->next = new_node;
        rear = new_node;
    }

    rear->next = front;
}

void dequeue() {
    if (front == NULL) {
        printf("Queue is empty\n");
    } else if (front == rear) {
        printf("%d\n", front->data);
        front = NULL;
        rear = NULL;
    } else {
        printf("%d\n", front->data);
        front = front->next;
        rear->next = front;
    }
}

void display() {
    if (front == NULL) {
        printf("Queue is empty\n");
    } else {
        printf("The elements of the queue are:\n");
        Node* temp = front;
        do {
            printf("%d\t", temp->data);
            temp = temp->next;
        } while (temp != front);
        printf("\n");
    }
}

int main() {
    int element;
    int choice;
    while (1) {
        printf("\nMenu \n");
        printf("1. enqueue the element\n");
        printf("2. dequeue the element\n");
        printf("3. display the elements\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the element to enqueue: ");
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
    return 0;
}
