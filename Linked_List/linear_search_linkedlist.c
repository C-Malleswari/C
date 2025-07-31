#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Insert at end
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

// Linear search
int linearSearch(struct Node* head, int key) {
    int position = 0;
    while (head) {
        if (head->data == key)
            return position;
        head = head->next;
        position++;
    }
    return -1; // Not found
}

int main() {
    struct Node* head = NULL;
    append(&head, 10);
    append(&head, 20);
    append(&head, 30);
    append(&head, 40);

    int key;
    printf("Enter element to search: ");
    scanf("%d", &key);

    int pos = linearSearch(head, key);
    if (pos == -1)
        printf("Element %d not found in the list.\n", key);
    else
        printf("Element %d found at position %d.\n", key, pos);

    return 0;
}

