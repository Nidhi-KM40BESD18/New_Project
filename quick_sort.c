#include<stdio.h>
void swap( int *a, int *b)
{
        int c;
        c=*a;
        *a=*b;
        *b=c;
        return;
}

int partition(int *a, int start, int n) 
{
	int x=*(a+n);
	int i= start-1;
	for(int j=start; j<n; j++)
	{
		if(a[j]<=x)
		{
			i++;
			swap(&a[i],&a[j]);
		}
	}
	swap(&a[i+1],&a[n]);
	return i+i;
}

void quicksort(int *a, int start, int n)
{
	if(start < n)
	{
		int q=partition(a, start, n);
		quicksort(a, start, q-1);
		quicksort(a, q+1, n);
	}
}


int main()
{
	int n;
	printf("Enter the total number of elements to sort\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter array elemets\n");
	for(int i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	quicksort(arr, 1, n);
	for(int i=0; i<n; i++)
	{
		printf("%d\t",arr[i]);
	}
}

