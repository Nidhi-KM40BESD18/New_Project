#include<stdio.h>
void swap( int *a, int *b)
{
        int c;
        c=*a;
        *a=*b;
        *b=c;
   //     printf("%d%d",*a,*b);
        return;
}


int main()
{
	int n;
	printf("Enter total no. of elements to be sorted\n");
	scanf("%d",&n);
	int a[n],i,j;
	printf("Enter elements\n");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0; i<n-1; i++)
	{
		int temp=i;
		for(j=i+1; j<n; j++)
		{
			if(a[j]<a[temp])
			temp=j;
		}
		if(temp!=i)
		{
			swap(&a[i],&a[temp]);
		}
	}
	printf("After sorting\n");
	for(i=0; i<5; i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}
