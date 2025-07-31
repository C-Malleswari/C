# delete node in the linked list
## delete node at the begin of the linked list

```c
#include<stdio.h>
#include<stdlib.h>

struct node
{
        int data;
        struct node *next;
};
struct node *phead=NULL;
 void createnode(int n)
{

        struct node *new ,*temp;
        int i=0;
        while(i<n)
        {
                new=(struct node*)malloc(sizeof(struct node));
                if(new ==NULL)
                {
                        printf("malloc error\n");
                        return;
                }
                printf("enter the data part value:");
                scanf("%d",&new->data);
                new->next=NULL;
                if(phead==NULL)
                {
                        temp = phead=new;
                }
                else
                {
                        //temp=phead;
                        temp->next=new;
                        temp=new;



                }


                i++;
        }
}
void deletenode_begin()
{
	struct node *temp;
	temp=phead;
	phead=phead->next;
	free(temp);
	temp=NULL;
}
void displaylist(void)
{
        struct node *temp;
        temp = phead;
        while(temp != NULL)
        {
                printf("%d->",temp->data);
                temp = temp->next;
        }
        printf("NULL\n");
}

int main()
{
        int n;
        printf("ente rth no of nodes");
        scanf("%d",&n);
        createnode(n);
	displaylist();
	deletenode_begin();
	displaylist();
}
```
## Write a C program to delete Last node and middle node in the given liked list.
```c
//Write a C program to delete Last node and middle node in the given liked list ?
#include <stdio.h>
#include <stdlib.h>

// Define node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to insert node at end
void insertEnd(struct Node** head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    while (temp->next)
        temp = temp->next;

    temp->next = newNode;
}

// Function to print linked list
void printList(struct Node* head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    while (head) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Function to delete last node
void deleteLastNode(struct Node** head) {
    if (*head == NULL) return;

    struct Node* temp = *head;

    if (temp->next == NULL) {
        // Only one node
        free(temp);
        *head = NULL;
        return;
    }

    while (temp->next->next)
        temp = temp->next;

    free(temp->next);
    temp->next = NULL;
}

// Function to delete middle node
void deleteMiddleNode(struct Node** head) {
    if (*head == NULL || (*head)->next == NULL)
        return;

    struct Node *slow = *head, *fast = *head;
    struct Node *prev = NULL;

    while (fast && fast->next) {
        fast = fast->next->next;
        prev = slow;
        slow = slow->next;
    }

    // Delete the middle node
    prev->next = slow->next;
    free(slow);
}

// Main function
int main() {
    struct Node* head = NULL;

    // Create linked list
    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);
    insertEnd(&head, 40);
    insertEnd(&head, 50);

    printf("Original List:\n");
    printList(head);

    deleteLastNode(&head);
    printf("\nAfter deleting last node:\n");
    printList(head);

    deleteMiddleNode(&head);
    printf("\nAfter deleting middle node:\n");
    printList(head);

    return 0;
}


```

## delete node  at given position in the linked list
```c
#include<stdio.h>
#include<stdlib.h>

struct node
{
        int data;
        struct node *next;
};
struct node *phead=NULL;
 void createnode(int n)
{

        struct node *new ,*temp;
        int i=0;
        while(i<n)
        {
                new=(struct node*)malloc(sizeof(struct node));
                if(new ==NULL)
                {
                        printf("malloc error\n");
                        return;
                }
                printf("enter the data part value:");
                scanf("%d",&new->data);
                new->next=NULL;
                if(phead==NULL)
                {
                        temp = phead=new;
                }
                else
                {
                        //temp=phead;
                        temp->next=new;
                        temp=new;



                }


                i++;
        }
}
void deletenode_atpos(int pos)
{
	struct node *temp1, *temp2;
	int i=0;
	temp1=temp2=phead;
	while(i<(pos-1))
	{
		temp2=temp1;
		temp1=temp1->next;
		i++;
	}
	temp2->next=temp1->next;
	free(temp1);
	temp1=NULL;
}

void displaylist(void)
{
        struct node *temp;
        temp = phead;
        while(temp != NULL)
        {
                printf("%d->",temp->data);
                temp = temp->next;
        }
        printf("NULL\n");
}

int main()
{
        int n;
        printf("ente rth no of nodes");
       	scanf("%d",&n);
	int pos;
	printf("enter the delete the positon node:");
	scanf("%d",&pos);
        createnode(n);
	displaylist();
	deletenode_atpos(pos);
	displaylist();
}
```
## delete node at end of the linked list
```c
#include<stdio.h>
#include<stdlib.h>

struct node
{
        int data;
        struct node *next;
};
struct node *phead=NULL;
 void createnode(int n)
{

        struct node *new ,*temp;
        int i=0;
        while(i<n)
        {
                new=(struct node*)malloc(sizeof(struct node));
                if(new ==NULL)
                {
                    printf("malloc error\n");
                    return;
                }
                printf("enter the data part value:");
                scanf("%d",&new->data);
                new->next=NULL;
                if(phead==NULL)
                {
                    temp = phead=new;
                }
                else
                {
                    //temp=phead;
                    temp->next=new;
                    temp=new;



                }


            i++;
        }
}
void deletenode_end()
{
	struct node *temp1,*temp2;
	temp1=temp2=phead;
	while(temp1->next!=NULL)
	{
		temp2=temp1;
		temp1=temp1->next;
	}
	temp2->next=NULL;
	free(temp1);
	temp1=NULL;
}	
void displaylist(void)
{
        struct node *temp;
        temp = phead;
        while(temp != NULL)
        {
            printf("%d->",temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
}

int main()
{
    int n;
    printf("ente rth no of nodes");
    scanf("%d",&n);
    createnode(n);
    displaylist();
	deletenode_end();
	displaylist();
}
```
