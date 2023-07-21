#include <stdio.h>
#include <stdlib.h>

// Define a node structure for the stack
struct Node {
    int data;
    struct Node* next;
    struct Node* top;
};
struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}

// Function to push a node onto the top of the stack
void push( struct Node* *top,int data) {
    struct Node* node = newNode(data);
    node->next = *top;
    *top = node;
}

// Function to pop the top node from the stack
int pop(struct Node** top) {
    if (*top == NULL) {
        printf("Error: Stack underflow\n");
        exit(1);
    }
    int data = (*top)->data;
    struct Node* temp = *top;
    *top = (*top)->next;
    free(temp);
    return data;
}

// Function to check if the stack is empty
int isEmpty(struct Node* top) {
    return top == NULL;
}

// Function to sort the stack in descending order using only one temporary stack
void sortStack(struct Node** stack) {
    struct Node* tempStack = NULL;
    while (!isEmpty(*stack)) {
        int temp = pop(stack);
        while (!isEmpty(tempStack) && tempStack->data < temp) {
            push(stack, pop(&tempStack));
        }
        push(&tempStack, temp);
    }
    *stack = tempStack;
}

// Function to print the elements of the stack
void printStack(struct Node* top) {
    while (top != NULL) {
        printf("%d ", top->data);
        top = top->next;
    }
    printf("\n");
}

// Driver code
int main() {
    struct Node* stack = NULL;
    push(&stack, 11);
    push(&stack, 2);
    push(&stack, 32);
    push(&stack, 3);
    push(&stack, 41);
    printf("Original stack: ");
    printStack(stack);
    sortStack(&stack);
    printf("Sorted stack: ");
    printStack(stack);
    return 0;
}
