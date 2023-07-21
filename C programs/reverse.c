#include <stdio.h>
#include <stdlib.h>

// Node structure for doubly linked list
struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Function to display the doubly linked list
void displayList(struct Node *head) {
    struct Node *current = head;
    while (current) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// Function to display the doubly linked list in reverse order
void displayReverseList(struct Node *tail) {
    struct Node *current = tail;
    while (current) {
        printf("%d ", current->data);
        current = current->prev;
    }
    printf("\n");
}

// Function to free the doubly linked list
void freeList(struct Node *head) {
    while (head) {
        struct Node *temp = head;
        head = head->next;
        free(temp);
    }
}

// Main function to create and test the doubly linked list
int main() {
    int n, data;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    // Creating nodes
    struct Node *head = NULL, *tail = NULL;
    for (int i = 0; i < n; i++) {
        printf("Enter the data for node %d: ", i+1);
        scanf("%d", &data);
        struct Node *newNode = createNode(data);

        // Linking nodes
        if (!head) {
            head = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
        }
        tail = newNode;
    }

    // Displaying list
    printf("List: ");
    displayList(head);

    // Displaying list in reverse order
    printf("List in reverse order: ");
    displayReverseList(tail);

    // Freeing memory
    freeList(head);

    return 0;
}
