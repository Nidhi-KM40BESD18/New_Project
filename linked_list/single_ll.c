#include<stdio.h>
#include<stdlib.h>
struct student
{
	int ID;
	char name[50];
	struct student *next;
};
//struct student * insertatpos(struct student *head);
struct student* createnode(void);
void traversal(struct student *h);

int main()
{
	struct student *head=NULL, *last=NULL, *new=NULL;
	int d,p, n;
	while(1)
	{
	printf("Choose from below\n");
	printf("1.Create Node\n");
	printf("2.Insert a node\n");
	printf("3.Delete a node\n");
	printf("4.Display node\n");
	printf("5.Quit\n");
//	printf("6.Reverse\n");
	printf("6.Middle Node\n");
	scanf("%d",&d);
	
	if(d==1)
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
	}
	else if(d==2)
	{
		struct student *temp=head;
		printf("Enter position\n");
		scanf("%d",&p);
		new=createnode();
		int i=1;
		if(p==1)
		{
			new->next=head;
			head=new;
		}
		while(p!=1 && i<p-1)
		{
			temp=temp->next;
			i++;
		}
		new->next=temp->next;
		temp->next=new;
	}
	else if(d==3)
	{
		int key;
		printf("Enter a key for deletion\n");
		scanf("%d",&key);
		struct student *temp, *q;
		temp=head;
		if(head->ID == key)
		{
			q=head->next;
			free(head);
			head=q;
		}
		else
		{
			while(temp->next->ID!=key)
			{
				temp=temp->next;
			}
			q=temp->next;
			temp->next=q->next;
			free(q);
		}
	}
	else if(d==4)
	{
		n=0;
		 struct student *temp=head;
		 while(temp)
		 {
			 printf("%d\n",temp->ID);
			 temp=temp->next;
			 n++;
		 }
	}
	else if(d==5)
	{
		return 0;
	}
	else if(d==6)
	{
		struct student *q=head, *p=head;
		if(n%2 !=0)
		{
		while(p->next)
		{
			q=q->next;
			p=p->next->next;
		}
		printf("%d\n",q->ID);
		}
		else
			printf("Possible for odd no. of keys\n");
	}

	}
}

struct student* createnode(void)
{
     struct student *p=NULL;
     p=(struct student *)malloc(sizeof(struct student));
     if(p==NULL)
        {
                printf("No allocation happened\n");
        }
     printf("Enter data\n");
     scanf("%d",&p->ID);
     p->next=NULL;
     return p;
}	

/*void traversal(struct student *h)
{
        while(h)
        {
                printf("%d\n",h->ID);
                h=h->next;
        }
}*/

/*struct student * insertatpos(struct student *head)
{
	struct student *new=NULL, *h=head;
	int i=1,p;
	printf("Enter position\n");
	scanf("%d",&p);
	new=createnode();
	if(p==1)
	{
		new->next=h;
		return new;
	}
	while(i<p-1)
	{
		h=h->next;
		i++;
	}
	new->next=h->next;
	h->next=new;
	return h;
}*/


