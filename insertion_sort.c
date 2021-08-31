#include<stdio.h>
int main()
{
	int n;
	printf("Enter total no. of elements to be inserted\n");
	scanf("%d",&n);
	int a[n],i,j;
	printf("Enter elements\n");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1; i<n; i++)
	{
		int temp;
		temp=a[i];
		j=i-1;
		while( a[j]>temp)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	printf("After sorting\n");
	for(i=0; i<5; i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}
