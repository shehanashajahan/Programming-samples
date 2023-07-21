#include <stdio.h>

char stack[100];
int top = -1;
void push(char x) {
    stack[++top] = x;
}
char pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}
int isBalanced(char *exp) {
    char x;
    while (*exp != '\0') {
        if (*exp == '(' || *exp == '[' || *exp == '{') {
            push(*exp);
        }
        else if (*exp == ')' || *exp == ']' || *exp == '}') {
            x = pop();
            if ((*exp == ')' && x != '(') || (*exp == ']' && x != '[') || (*exp == '}' && x != '{')) {
                return 0;
            }
        }
        exp++;
    }
    if (top == -1) {
        return 1;
    }
    else {
        return 0;
    }
}
int main() {
    char exp[100];
    printf("Enter an expression: ");
    scanf("%s", exp);
    if (isBalanced(exp)) {
        printf("The symbols are balanced\n");
    }
    else {
        printf("The symbols are not balanced\n");
    }
    return 0;
}
