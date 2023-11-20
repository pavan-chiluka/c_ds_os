#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void displayreverse(struct node *head)
{
       if(head==NULL)
        {
	return;
        }
        else
        {
	displayreverse(head->next);
	printf("%d",head->data);
        }
}

void display(struct node *head)
{
	struct node *temp1=head;
	while(temp1!=NULL)
	{
        printf("%d",temp1->data);
	temp1=temp1->next;
	}
}

void addatfirst(struct node **head)
{
         struct node *newnode1=NULL;
         newnode1=((struct node*)malloc(sizeof(struct node)));
         printf("enter data for newnode1");
         scanf("%d",&newnode1->data);
         newnode1->next=NULL;
         newnode1->next=*head;
         *head=newnode1;
}

void addatpos(struct node *head)
{
         int pos,i=0;
         struct node *temp2=head;
         struct node *newnode2=NULL;
         newnode2=((struct node*)malloc(sizeof(struct node)));
         printf("enter data for newnode2");
         scanf("%d",&newnode2->data);
         newnode2->next=NULL;
         printf("enter position for insert");
         scanf("%d",&pos);
         while(i<pos-1)
         {
         temp2=temp2->next;
         ++i;
         }
         newnode2->next=temp2->next;
         temp2->next=newnode2;
}

void addatlast(struct node *head)
{
         struct node *temp3=head;
         struct node *newnode3=NULL;
         newnode3=((struct node*)malloc(sizeof(struct node)));
         printf("enter data for newnode3");
         scanf("%d",&newnode3->data);
         newnode3->next=NULL;
         while(temp3->next!=NULL)
         {
         temp3=temp3->next;
         }
         temp3->next=newnode3;
         temp3=newnode3;
}
void deleteatlast(struct node *head)
{
     struct node *temp4=head,*prevnode=NULL;
     while(temp4->next!=NULL)
     {
     prevnode=temp4;
     temp4=temp4->next;
     }
     prevnode->next=NULL;
     free(temp4);
}
void deleteatpos(struct node *head)
{
     struct node *temp5=head,*newnode=NULL;
     int i=0,pos;
     printf("enter a pos");
     scanf("%d",&pos);
     while(i<pos-1)
     {
     temp5=temp5->next;
     i++;
     }
     newnode=temp5->next;
     temp5->next=newnode->next;
     free(newnode);
}
void deleteatfirst(struct node **head)
{
     struct node *temp6=*head;
    *head=temp6->next;
     free(temp6);
}
int main()
{
	struct node *head=NULL,*temp=NULL;
	int n,i,choice;
	printf("no of data");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		struct node *newnode=NULL;
		newnode=((struct node*)malloc(sizeof(struct node)));
		newnode->next=NULL;
		printf("enter data");
		scanf("%d",&newnode->data);
		if(head==NULL)
		{
			head=temp=newnode;
		}
		else
		{
                temp->next=newnode;
		temp=newnode;
		}
	}
	while(1)
	{
	printf("1:displayreverse,2:display,3:addatfirst,4:addatpos,5:addatlast,6:deleteat1st,7:deleteatlast,8:dleteatpos,9:exit");
	scanf("%d",&choice);
	switch(choice)
	{
        case 1: displayreverse(head);
		break;
       
	case 2:display(head);
	       break;

	case 3:addatfirst(&head);
	       break;

	case 4:addatpos(head);
	       break;

	case 5:addatlast(head);
	       break;

	case 6:deleteatfirst(&head);
	       break;

	case 7:deleteatlast(head);
	       break;

	case 8:deleteatpos(head);
	       break;

        case 9 :exit(0);
	}
	}
}



	
