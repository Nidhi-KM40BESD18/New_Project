#include<stdio.h>
#define SIZE 10
void pop(int s[], int *t);
void push(int s[], int *t);

int main()
{
	int s[SIZE], top=-1, ch=1;
	while(1)
	{
		printf("Choose 1.Push, 2.Pop, 3.Quit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: push(s, &top);
			break;
			case 2: pop(s, &top);
			break;
			case 3: goto EXIT;
		}
	}
EXIT:printf("Thank you\n");
}

void push(int s[], int *t)
{
	if(*t == SIZE-1)
		printf("stack is full\n");
	else
	{
		int n;
		printf("Enter element to push\n"); 
		scanf("%d",&n);
		++*t;
		s[*t]=n;
	}
}

void pop(int s[], int *t)
{
	if(*t == 1)
	printf("Stack is empty\n");
	else
	{
		printf("Popping: %d\n",s[*t]);
		--*t;
	}
}
