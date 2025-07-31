#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void append(struct Node** head, int data) {
    struct Node* new_node = malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;

    if (!*head) {
        *head = new_node;
        return;
    }

    struct Node* temp = *head;
    while (temp->next)
        temp = temp->next;

    temp->next = new_node;
}

int search(struct Node* head, int key) {
    int pos = 0;
    while (head) {
        if (head->data == key)
            return pos;
        pos++;
        head = head->next;
    }
    return -1;
}

int main() {
    struct Node* head = NULL;
    int n, val, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &val);
        append(&head, val);
    }

    printf("Enter value to search: ");
    scanf("%d", &key);

    int pos = search(head, key);
    if (pos != -1)
        printf("Element %d found at position %d\n", key, pos);
    else
        printf("Element %d not found in the list\n", key);

    return 0;
}

