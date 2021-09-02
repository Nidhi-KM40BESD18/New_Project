
#include<stdio.h>
void swap( int *a, int *b)
{
        int c;
        c=*a;
        *a=*b;
        *b=c;
        return;
}

int partition(int *a,int lb,int ub)
{
	int pivot,start,end;
	pivot=a[lb];
	start=lb;
	end=ub;
	while(start<end)
	{
		while(a[start]<=pivot)
		{
			start++;
		}
		while(a[end]>pivot)
		{
			end--;
		}
		if(start<end)
		{
			swap(&a[start],&a[end]);
		}
	}
	swap(&a[lb],&a[end]);
        return end;
}
void quicksort(int *a, int lb, int ub)
{
	if(lb<ub)
	{
		int loc;
		loc=partition(a, lb, ub);
		quicksort(a,lb,loc-1);
		quicksort(a,loc+1,ub);
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
        quicksort(arr, 0, n-1);
        printf("After  sorting\n");
        for(int i=0; i<n; i++)
        {
                printf("%d\t",arr[i]);
        }
	printf("\n");
        return 0;
}
