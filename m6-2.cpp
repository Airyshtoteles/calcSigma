#include <stdio.h>
#include <stdlib.h>
#define MAX 10 // Ukuran maksimum stack

struct Stack {
    int top;
    int arr[MAX];
};

void initStack(struct Stack *s) {
    s->top = -1;
}

int isEmpty(struct Stack *s) {
    return s->top == -1;
}

int isFull(struct Stack *s) {
    return s->top == MAX - 1;
}

void push(struct Stack *s, int value) {
    if (isFull(s)) {
        printf("Stack penuh! Tidak dapat menambahkan elemen.\n");
        return;
    }
    s->arr[++(s->top)] = value;
    printf("%d dimasukkan ke dalam stack.\n", value);
}

int pop(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack kosong! Tidak ada elemen untuk dihapus.\n");
        return -1;
    }
    return s->arr[(s->top)--];
}

int peek(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack kosong! Tidak ada elemen untuk dilihat.\n");
        return -1;
    }
    return s->arr[s->top];
}

void display(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack kosong!\n");
        return;
    }
    printf("Isi stack: ");
    for (int i = 0; i <= s->top; i++) {
        printf("%d ", s->arr[i]);
    }
    printf("\n");
}

int main() {
    struct Stack s;
    initStack(&s);
    int choice, value;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Pilih operasi: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Masukkan nilai: ");
                scanf("%d", &value);
                push(&s, value);
                break;
            case 2:
                printf("Menghapus elemen: %d\n", pop(&s));
                break;
            case 3:
                printf("Elemen teratas: %d\n", peek(&s));
                break;
            case 4:
                display(&s);
                break;
            case 5:
                exit(0);
            default:
                printf("Pilihan tidak valid!\n");
        }
    }
    return 0;
}