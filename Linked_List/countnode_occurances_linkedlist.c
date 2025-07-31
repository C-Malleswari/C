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
int countnode(int target)
{
        struct node *trav;
        trav=phead;
        int count=0;
        while(trav!=NULL)
        {
		if(trav->data == target)
		{
                count++;
        	}
		trav=trav->data;
	}
        return count;
}
int main()
{
        int n;
        printf("ente rth no of nodes");
        scanf("%d",&n);
	int target;
	printf("enter the target:");
	scanf("%d",&target);
        createnode(n);
        displaylist();
        countnode(target);
        printf("count of no of nodes  %d",countnode(target));
        }
