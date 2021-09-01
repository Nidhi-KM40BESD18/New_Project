#include<stdio.h>

void merge(int *a, int l, int mid, int r)
{
	int i,j,k,b[r];
	for(i=l, j=mid+1, k=l; i<=mid && j<=r; )
	{
		if(a[i]<a[j])
		{
			b[k]=a[i];
			i++;
		}
		else
		{
			b[k]=a[j];
			j++;
		}k++;
	}
	if(i>mid)
	{
		while(j<=r)
		{
			b[k]=a[j];
			j++;
			k++;
		}
	}
	else
	{
		while(i<=mid)
		{
			b[k]=a[i];
			i++;
			k++;
		}
	}
	for(k=l; k<=r; k++)
	{
		a[k]=b[k];
	}
//	printf("\n");
}
void merge_sort(int *a, int  l, int r)
{
	if(l<r)
	{
		int mid;
		mid =(l+r)/2;
		merge_sort(a, l, mid);
		merge_sort(a, mid+1, r);
		merge(a, l, mid, r);
	}
}
int main()
{
	int n;
	printf("Enter the total number of elements\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements\n");
	for(int i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	merge_sort(arr, 0, n-1);
	printf("After  sorting\n");
	for(int i=0; i<n; i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	return 0;

}
