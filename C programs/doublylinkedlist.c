#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};
struct Node* createNode(int data) {
    struct Node *newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}
void displayList(struct Node *head) {
    struct Node *current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}
void displayReverseList(struct Node *tail) {
    struct Node *current = tail;
    while (current) {
        printf("%d ", current->data);
        current = current->prev;
    }
    printf("\n");
}

int main() {
    int n, data;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    struct Node *head = NULL, *tail = NULL;
    for (int i = 0; i < n; i++) {
        printf("Enter the data for node %d: ", i+1);
        scanf("%d", &data);
        struct Node *newNode = createNode(data);
        if (i == 0) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    return 0;
}
