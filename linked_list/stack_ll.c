#include<stdio.h>
#include<stdlib.h>
struct student
{
        int ID;
        char name[50];
        struct student *next;
};
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
        struct student *top=NULL, *last=NULL, *new=NULL;
	int n;
	//printf("Choose 1.Push 2.Pop 3.Dispaly 4.Exit\n");
	//scanf("%d",&n);
	while(1)
	{
		printf("Choose 1.Push 2.Pop 3.Dispaly 4.Exit\n");
	        scanf("%d",&n);

		if(n==1)
		{
		new = createnode();
	 	if(top==NULL)
                {
                        top=new;
                }
                else
                {
                        new->next=top;
                        top=new;
                }}
		else if(n==2)
		{
			struct student *t;
			t=top;
			top=t->next;
			free(t);
		}
		else if(n==3)
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
		else if(n==4)
		{
			printf("Thank you\n");
			return 0;
		}
	}
	
}
		

