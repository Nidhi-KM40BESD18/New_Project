#include<stdio.h>
#include<stdlib.h>

struct student
{
        int n;
        struct student *next;
};
struct student *head;

struct student* createnode(void)
{
        struct student *p=NULL;
        p=(struct student *)malloc(sizeof(struct student));
        if(p==NULL)
        {
                printf("No allocation happened\n");
        }
        printf("Enter data\n");
        scanf("%d",&p->n);
        p->next=NULL;
        return p;
}
struct student* reverse(struct student *head);
int main()
{
	struct student *head=NULL, *last=NULL, *new=NULL;
	int d;	
      	while(1)
        {
        printf("Choose from below\n");
        printf("1.Create Node\n");
        printf("2.Reverse node\n");
	printf("3.Display\n");
	printf("4.quit\n");
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

	else  if(d==2)
        {
                /*struct student *p=NULL,*q=NULL,*r=NULL;
                p=head;
		q=p->next;
                r= q->next;
                 //q->next=p;
                while(q)
                {
                        q->next=p;
                        p=q;
                        q=r;
                        if(r)
                                r=r->next;
                }
		head->next=NULL;*/
		head=reverse(head);

        }
	else if(d==3)
	{
		 struct student *temp=head;
                 while(temp)
                 {
                         printf("%d\n",temp->n);
                         temp=temp->next;
                 }
	}
	else if(d==4)
	{
		return 0;
	}
}
}

struct student* reverse(struct student *head)
{
	struct student *p=NULL,*q=NULL,*r=NULL;
                p=head;
                q=p->next;
                r= q->next;
                 //q->next=p;
                while(q)
                {
                        q->next=p;
                        p=q;
                        q=r;
                        if(r)
                                r=r->next;
                }
                head->next=NULL;
		return p;
}
