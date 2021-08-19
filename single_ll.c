#include<stdio.h>
#include<stdlib.h>
struct node
{
	int n;
	struct node *next;
};
struct node *head;
struct node* createnode(void)
{
	struct node *p=NULL;
	p=(struct node *)malloc(sizeof(struct node));
	if(p==NULL)
	{
		printf("No allocation happened\n");
	}
	printf("Enter data\n");
	scanf("%d",&p->n);
	p->next=NULL;
	return p;
}

void traversal(struct node *h)
{
	while(h)
	{
		printf("%d\n",h->n);
		h=h->next;
	}
}

int main()
{
	struct node *new=NULL, *last=NULL;
	head= NULL;
	int length;
	char ch;

	while(1)
	{
		new=createnode();
		if(head==NULL)
		{
			head=new;
			last=new;
		}
		else
		{
			last->next=new;
			last=new;
		}
		traversal(head);
		printf("Continue:Y or  Discontinue:N\n");
		scanf("%*c%c",&ch);
		if(ch=='Y' || ch=='y')
			continue;
		else 
			return 0;
	}
}
