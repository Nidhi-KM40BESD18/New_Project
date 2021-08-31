#include<stdio.h>
void swap(int *x, int *y)
{
	*x=*x^*y;
        *y=*x^*y;
        *x=*x^*y;
}
int main()
{
	int x,y;
	printf("Enter the values to swap\n");
        scanf("%d%d",&x,&y);
	swap(&x,&y);
	printf("%d %d\n",x,y);
	return 0;
}
 		
