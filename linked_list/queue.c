#include<stdio.h>
#include<stdlib.h>
struct student
{
        int ID;
        char name[50];
        struct student *next;
}*top;
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
	struct student *tail=NULL,*new=NULL;
	top=NULL;
	int a;
	while(1)
	{
		printf("Choose 1.Push 2.Pop 3.Display 4.Exit\n");
		scanf("%d",&a);
		if(a==1)
		{
			new=createnode();
			if(top == NULL)
			{
				top=new;
				tail=new;
			}
			else
			{
				tail->next=new;
				tail=new;
			}
		}
		else if(a==2)
		{
			struct student *t;
			t=top;
			top=t->next;
			free(t);
		}
		else if(a==3)
		{
			struct student *t;
                        t=top;
                        while(t)
                         {
                         printf("%d\t",t->ID);
                         t=t->next;
                         }
                        printf("\n");
		}
		else if(a==4)
		{
			printf("Thank you\n");
                        return 0;
		}
	}


}
