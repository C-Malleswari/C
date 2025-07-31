#include <stdio.h>
#include <stdlib.h>

// Node definition
struct Node {
    int data;
    struct Node* next;
};

// Append node at end (to preserve input order)
void append(struct Node** head_ref, int data) {
    struct Node* new_node = malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;

    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    struct Node* temp = *head_ref;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = new_node;
}

// Reverse list
struct Node* reverse(struct Node* head) {
    struct Node *prev = NULL, *curr = head, *next;
    while (curr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

// Check if palindrome
int isPalindrome(struct Node* head) {
    struct Node *slow = head, *fast = head;
    struct Node *prev_of_slow = NULL, *second_half = NULL;

    if (!head || !head->next)
        return 1;

    // Find middle
    while (fast && fast->next) {
        fast = fast->next->next;
        prev_of_slow = slow;
        slow = slow->next;
    }

    // For odd elements, skip middle node
    if (fast)
        slow = slow->next;

    second_half = reverse(slow);
    prev_of_slow->next = NULL; // Split list

    // Compare halves
    struct Node *first_half = head;
    struct Node *second_half_copy = second_half;
    while (first_half && second_half) {
        if (first_half->data != second_half->data)
            return 0;
        first_half = first_half->next;
        second_half = second_half->next;
    }

    return 1;
}

int main() {
    struct Node* head = NULL;
    int n, val;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &val);
        append(&head, val);  // Maintain input order
    }

    if (isPalindrome(head))
        printf("Linked list is a palindrome.\n");
    else
        printf("Linked list is NOT a palindrome.\n");

    return 0;
}

