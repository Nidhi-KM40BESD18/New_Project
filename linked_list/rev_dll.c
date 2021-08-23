#include<stdio.h>
#include<stdlib.h>
struct student
{
	int ID;
	struct student *prev;
	struct student *next;
};
struct student *createnode()
{
	struct student *new=NULL;
	new=(struct student*)malloc(sizeof(struct student));
	if(new==NULL)
		printf("No memory alloacted\n");
	printf("Enter ID\n");
	scanf("%d",&new->ID);
	new->next=NULL;
	new->prev=NULL;
	return new;
}
struct student* delete(struct student *head)
{
	struct student *t=NULL,*q=NULL;
        int d;
      	printf("Enter the key after  which a node is to be deleted\n");					scanf("%d",&d);
        t = head;
                        while(t->ID != d)
                        {
                                t=t->next;
                        }
                        q=t->next;
                        t->next=q->next;
                        q->next->prev=t;
                        free(q);
}

/*struct student* reverse(struct student *head)
{
	struct student *new, *p;
	new = head; 
	p = new->next;

	new->next = NULL;
	new->prev = p;

	while(new)
	{
		p->prev = new->next;
	       	p->next = new;
       		new = p;
		p = p->prev;
	}
	head = new;
	return head;
}*/

int main()
{
        struct student *new=NULL, *last=NULL, *head=NULL;
        int length;
        int ch;
        while(1)
        {
		 printf("Choose from below\n");
        printf("1.Create Node\n");
        printf("2.Insert Node in between 2 nodes\n");
        printf("3.Delete Node in between 2 nodes\n");
	printf("4.Reverse\n");
	printf("5.Quit\n");
        scanf("%d",&ch);

		if(ch==1)
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
			new->prev=last;
			last=new;
		}
		}
		if(ch==2)
		{
			 int key;
			printf("Enter the key after which a node is to be inseerted\n");
			scanf("%d",&key);
			new=createnode();
                	struct student *temp, *q;
               	 	temp=head;
                	while(temp->ID != key)
                	{
				temp=temp->next;
			}
				q=temp->next;
				new->next=q;
				q->prev=new;
				temp->next=new;
				new->prev=temp;
		}
		if(ch==3)
		{
			/*struct student *t=NULL,*q=NULL;
			int d;
			printf("Enter the key after  which a node is to be deleted\n");
			scanf("%d",&d);
			t = head;
			while(t->ID != d)
			{
				t=t->next;
			}
			q=t->next;
			t->next=q->next;
			q->next->prev=t;
			free(q);*/
			delete(head);
		}
		if(ch==4)
		{
			struct student *new1, *temp;
			new1 = head;
			while(new1)
			{
				temp = new1->prev;
				new1->prev = new1->next;
				new1->next = temp;
				new1= new1->prev;
			}
			if(temp){
			temp= temp->prev;
			head=temp;}
		}
		if(ch==5)
		{
			return 0;
		}
		struct student *p=head;
		while(p)
		{
			printf("%d\t",p->ID);
			p=p->next;
		}
		printf("\n");
	}
}
