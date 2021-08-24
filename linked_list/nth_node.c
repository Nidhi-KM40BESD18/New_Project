#include<stdio.h>
#include<stdlib.h>

struct student
{
        int ID;
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
        scanf("%d",&p->ID);
        p->next=NULL;
        return p;
}

int main()
{
        struct student *head=NULL, *last=NULL, *new=NULL;
        int d,n;
        while(1)
        {
        printf("Choose from below\n");
        printf("1.Create Node\n");
        printf("2.Nth node from the end\n");
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
	else if(d==2)
	{
		struct student *q, *p;
                q=head;
                p=head;
                int i=1, z;
                printf("Enter value of n\n");
                scanf("%d",&z);
                if(z<=n)
                {
                while(i<=z)
                {
                        q=q->next;
                        i++;
                }
                while(q)
		 {
                        p=p->next;
                        q=q->next;
                }
                printf("element is %d\n",p->ID);
                }
                else
                        printf("Please enter valid value\n");
	}
	else if(d==3)
        {
		n=0;
                 struct student *temp=head;
                 while(temp)
                 {
                         printf("%d\t",temp->ID);
                         temp=temp->next;
			 n++;
                 }
		 printf("\n");
        }
        else if(d==4)
        {
                return 0;
        }
}
}


