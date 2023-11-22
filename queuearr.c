#include <stdio.h>
#include <stdlib.h>

struct queue {
    int* arr;
    int top, rear, capacity;
};

struct queue* initialize(struct queue* q1, int cap) {
    q1 = (struct queue*)malloc(sizeof(struct queue));
    if (!q1) {
        printf("Memory is not allocated\n");
        return NULL;
    }
    q1->arr = (int*)malloc(sizeof(int) * cap);
    q1->top = -1;
    q1->rear = -1;
    q1->capacity = cap;
    return q1;
}

struct queue* enqueue(struct queue* q1, int data) {
    if (q1->rear == q1->capacity - 1) {
        printf("Queue is full, the data is not enqueued\n");
    } else {
        if (q1->top == -1) {
            q1->top++;
        }
        q1->arr[++q1->rear] = data;
    }
    return q1;
}

struct queue* dequeue(struct queue* q1) {
    if (q1->rear == -1) {
        printf("The queue is empty\n");
    } else {
        printf("The dequed element is %d\n", q1->arr[q1->top]);
        for (int i = q1->top; i < q1->rear; i++) {
            q1->arr[i] = q1->arr[i + 1];
        }
        q1->rear--;
        if (q1->rear == -1) {
            q1->top = -1; // Reset top when the last element is removed
        }
    }
    return q1;
}

void display(struct queue* q1) {
    if (q1->rear == -1) {
        printf("The queue is empty\n");
    } else {
        printf("Queue elements: ");
        for (int i = q1->top; i <= q1->rear; i++) {
            printf("%d ", q1->arr[i]);
        }
        printf("\n");
    }
}

int main() {
    struct queue* q1 = NULL;
    int capacity, choice, data;

    printf("Enter the capacity of the queue: ");
    scanf("%d", &capacity);

    q1 = initialize(q1, capacity);

    while (1) {
        printf("Menu:\n");
        printf("1 - Enqueue\n");
        printf("2 - Dequeue\n");
        printf("3 - Display\n");
        printf("4 - Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to enqueue: ");
                scanf("%d", &data);
                q1 = enqueue(q1, data);
                break;
            case 2:
                q1 = dequeue(q1);
                break;
            case 3:
                display(q1);
                break;
            case 4:
                free(q1->arr);
                free(q1);
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
