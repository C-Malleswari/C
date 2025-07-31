#include <stdio.h>
#include <stdlib.h>

// Node definition
struct Node {
    int data;
    struct Node* next;
};

// Push node at front
void push(struct Node** head_ref, int data) {
    struct Node* new_node = malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = *head_ref;
    *head_ref = new_node;
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
    struct Node *prev_of_slow = head, *second_half, *midnode = NULL;

    if (!head || !head->next) return 1; // Empty or 1 node

    // Find mid
    while (fast && fast->next) {
        fast = fast->next->next;
        prev_of_slow = slow;
        slow = slow->next;
    }

    if (fast) { // Odd nodes
        midnode = slow;
        slow = slow->next;
    }

    second_half = slow;
    prev_of_slow->next = NULL;
    second_half = reverse(second_half);

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
    
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);

    if (isPalindrome(head))
        printf("Linked list is a palindrome.\n");
    else
        printf("Linked list is NOT a palindrome.\n");

    return 0;
}

