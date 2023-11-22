#include <stdio.h>
#include <stdlib.h>

struct stack {
    int* arr;
    int top, size, capacity;
};

struct stack* initialize(struct stack* s1, int cap) {
    s1 = (struct stack*)malloc(sizeof(struct stack));
    s1->top = -1;
    s1->capacity = cap;
    s1->arr = (int*)malloc(sizeof(int) * cap);
    s1->size = 0;
    return s1;
}

int isFull(struct stack* s) {
    return s->top == s->capacity - 1;
}

int isEmpty(struct stack* s) {
    return s->top == -1;
}

void push(struct stack* s, int data) {
    if (isFull(s)) {
        printf("Stack is full. Cannot push %d.\n", data);
        return;
    }
    s->arr[++s->top] = data;
    s->size++;
    printf("%d pushed to the stack.\n", data);
}

int pop(struct stack* s) {
    if (isEmpty(s)) {
        printf("Stack is empty. Cannot pop.\n");
        return -1;
    }
    int data = s->arr[s->top--];
    s->size--;
    return data;
}

void display(struct stack* s) {
    if (isEmpty(s)) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = 0; i <= s->top; i++) {
        printf("%d ", s->arr[i]);
    }
    printf("\n");
}

int main() {
    int cap;
    printf("Enter the size of the stack: ");
    scanf("%d", &cap);
    struct stack* s1;
    s1 = initialize(s1, cap);

    while (1) {
        int data;
        int choice;
        printf("The menu is:\n");
        printf("1 - for push\n");
        printf("2 - for pop\n");
        printf("3 - for display\n");
        printf("4 - for exit\n");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            printf("Enter the data: ");
            scanf("%d", &data);
            push(s1, data);
            break;
        case 2:
            data = pop(s1);
            if (data != -1) {
                printf("%d popped from the stack.\n", data);
            }
            break;
        case 3:
            display(s1);
            break;
        case 4:
            free(s1->arr); 
            free(s1);      
            return 0;
        default:
            printf("Invalid input\n");
            break;
        }
    }

    return 0;
}
