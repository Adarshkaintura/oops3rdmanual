#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<string.h>

// Structure to represent a stack
struct Stack {
    char* arr;
    int top;
    unsigned capacity;
};

// Function to create a new stack
struct Stack* createStack(unsigned capacity) {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->arr = (char*)malloc(stack->capacity * sizeof(char));
    return stack;
}

// Function to check if the stack is empty
int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

// Function to push an element onto the stack
void push(struct Stack* stack, char item) {
    stack->arr[++stack->top] = item;
}

// Function to pop an element from the stack
char pop(struct Stack* stack) {
    if (!isEmpty(stack)) {
        return stack->arr[stack->top--];
    }
    return '\0';
}

// Function to return the top element of the stack without popping
char peek(struct Stack* stack) {
    if (!isEmpty(stack)) {
        return stack->arr[stack->top];
    }
    return '\0';
}

// Function to check if a character is an operator
int isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}

// Function to get the precedence of an operator
int precedence(char op) {
    if (op == '+' || op == '-') {
        return 1;
    }
    if (op == '*' || op == '/') {
        return 2;
    }
    return 0;
}

// Function to convert infix expression to postfix expression
void infixToPostfix(char* infix) {
    struct Stack* stack = createStack(strlen(infix));
    int i, j;
    for (i = 0, j = -1; infix[i]; ++i) {
        if (isalnum(infix[i])) {
            printf("%c", infix[i]);
        } else if (infix[i] == '(') {
            push(stack, infix[i]);
        } else if (infix[i] == ')') {
            while (!isEmpty(stack) && peek(stack) != '(') {
                printf("%c", pop(stack));
            }
            if (!isEmpty(stack) && peek(stack) != '(') {
                printf("Invalid expression\n");
                return;
            } else {
                pop(stack);
            }
        } else {
            while (!isEmpty(stack) && precedence(infix[i]) <= precedence(peek(stack))) {
                printf("%c", pop(stack));
            }
            push(stack, infix[i]);
        }
    }
    while (!isEmpty(stack)) {
        printf("%c", pop(stack));
    }
    printf("\n");
}

// Function to evaluate a postfix expression
int evaluatePostfix(char* postfix) {
    struct Stack* stack = createStack(strlen(postfix));
    int i;
    for (i = 0; postfix[i]; ++i) {
        if (isdigit(postfix[i])) {
            push(stack, postfix[i] - '0');
        } else {
            int operand2 = pop(stack);
            int operand1 = pop(stack);
            switch (postfix[i]) {
                case '+':
                    push(stack, operand1 + operand2);
                    break;
                case '-':
                    push(stack, operand1 - operand2);
                    break;
                case '*':
                    push(stack, operand1 * operand2);
                    break;
                case '/':
                    push(stack, operand1 / operand2);
                    break;
            }
        }
    }
    return pop(stack);
}

int main() {
    char infix[100];
    printf("Enter an infix expression: ");
    scanf("%s", infix);

    printf("Postfix expression: ");
    infixToPostfix(infix);

    char postfix[100];
    printf("Enter a postfix expression: ");
    scanf("%s", postfix);

    int result = evaluatePostfix(postfix);
    printf("Result of postfix expression: %d\n", result);

    return 0;
}
