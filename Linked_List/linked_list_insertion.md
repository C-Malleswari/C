## linkedlist creation
```c
//linkedlist creation
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
}

```

## add node to begin at the linked list
```c
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Insert at beginning
void insertAtBeginning(struct Node** head, int data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
}

// Print list
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    int n, value;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        insertAtBeginning(&head, value);
    }

    printf("Linked List: ");
    printList(head);

    return 0;
}

```

## add node at the end of the linkedlist
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
void insertnode_end()
{
	struct node *new,*temp;
	new=(struct node*)malloc(sizeof(struct node));
	if(new==NULL)
	{
		printf("malloc error");
	}
	printf("ent ethe data to insert the a=end of the linked lsit:");
	scanf("%d",&new->data);
	new->next=NULL;
	if(phead==NULL)
	{
	phead=new;

	}

	else
	{
		temp=phead;
		while(temp->next!=NULL)
		{
			temp=temp->next;
			}
		temp->next=new;
		temp=new;
	}


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
	insertnode_end();
	displaylist();
}
```
## add node  at the position of linked list
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
                        phead=temp=new;
                }
                else
                {
                        temp->next=new;
                        temp=new;


                }

                i++;
        }
}
void insertnode_atmidpos(int pos)
{
	struct node *new,*temp;
	new=(struct node *)malloc(sizeof(struct node));
	if(new==NULL)
	{
		printf("malloc errror");
	}
	printf("enter teh data to be inset the postion %d given is",pos);
	scanf("%d",&new->data);
	new->next=NULL;
	if(phead==NULL)
	{
		phead=new;
	}
	int i=0;
	temp=phead;
	while(i<(pos-1))
	{
		temp=temp->next;
		i++;
		printf("hello\n");
	}
	new->next=temp->next;
	temp->next=new;
}

void displaylist(void)
{
        struct node *temp;
        temp=phead;
        while(temp!=NULL)
        {
                printf("%d->",temp->data);
                temp=temp->next;
        }
        printf("NULL\n");
}

int main()
{
        int n,pos;
        printf("ente rth no of nodes");
        scanf("%d",&n);
	printf("enter the positon of node");
        scanf("%d",&pos);
        createnode(n);
	displaylist();
	insertnode_atmidpos(pos);
	displaylist();
}
```

## insert node at middle in linked list
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
	struct node *pnew,*ptrav;
	int i=0;
	while(i<n)
	{
		pnew=(struct node *)malloc(sizeof(struct node));
		if(pnew==NULL)
		{
			printf("malloc error");
		}
		printf("ente rthe data to be");
		scanf("%d",&pnew->data);
		pnew->next=NULL;
		if(phead==NULL)
		{
			ptrav=phead=pnew;
		}
		else
		{
			ptrav->next=pnew;
			ptrav=pnew;
		}
		i++;
	}
}
void insert(int n)
{
	struct node *pnew,*ptrav;
	pnew=(struct node *)malloc(sizeof(struct node));
	if(pnew==NULL)
	{
		printf("malloc error");
		return ;
	}
	printf("enter the data to be inserted:");
	scanf("%d",&pnew->data);
	pnew->next=NULL;
	if(phead == NULL)
	{
		ptrav=phead=pnew;
	}
	int i=0;
	while(i<(n/2))
	{
		ptrav=ptrav->next;
		i++;
	}
	pnew->next=ptrav->next;
	ptrav=pnew;
}
void display()
{
	struct node *ptrav;
	ptrav=phead;
	while(ptrav!=NULL)
	{
		printf("%d->",ptrav->data);
		ptrav=ptrav->next;
	}
	printf("NULL\n");
}

int main()
{
	int n;
	printf("ente rht number of nodes:");
	scanf("%d",&n);
	createnode(n);
	display();
	insert(n);
	display();
}
```
