#include<stdio.h>
int search_specific_elements(int *arr,int a, int n)
{
	int i,p;
	for(i=0;i<n;i++)
	{
		if(*(arr+i)==a)
		{
			return i+1;
		}
	}
	return -1;
}

int main()
{
	int n,c,a;
	printf("Enter total number of elements\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter array elements\n");
	for(int i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the element u need to search for\n");
	scanf("%d",&a);
	c=search_specific_elements(arr, a,n);
	if(c==-1)
		printf("Element not found\n");
	else
		printf("Element found at position %d\n",c);
	return 0;
}

