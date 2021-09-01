#include<stdio.h>
int binary_search(int *arr, int a, int n)
{
	int l=0,mid,e=n;
	while(l<=e)
	{
		mid=(l+e)/2;
		 if(a==arr[mid])
			return mid+1;
		else if(a<arr[mid])
			e=mid-1;
		else if(a>arr[mid])
			l=mid+1;
	}
	return -1;
}
int main()
{
	int n,a,c;
	printf("Enter the total number of elements\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements in a sorted way\n");
	for(int i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to search\n");
	scanf("%d",&a);
	c=binary_search(arr, a, n);
	if(c==-1)
		printf("Element not found\n");
	else
		printf("Element found at position %d\n",c);
	return 0;
}
