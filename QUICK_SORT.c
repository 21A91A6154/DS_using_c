#include<stdio.h>
int partition(int *arr,int L,int n)
{
	int i,j,p,temp;
	p=n;
	for(i=L,j=L;j<p;j++)
	{
		if(arr[j]<arr[p])
		{
			temp=arr[j];
			arr[j]=arr[i];
			arr[i]=temp;
			i++;
		}	
	}
	temp=arr[i];
	arr[i]=arr[p];
	arr[p]=temp;	
	return i;
}
void quick_sort(int *arr,int L,int n)
{
	int p,i;
	if(L<n)
	{
		p=partition(arr,L,n);
		quick_sort(arr,L,p-1);
		quick_sort(arr,p+1,n);
	}
}
void main()
{
	int arr[100],i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);//
	}
	quick_sort(arr,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
/*
8
55 20 30 60 75 1 25 50
0   1  2  3  4 5 6  7

20 30 1 25 50 75 60 55




9
22 66 33 77 21 88 11 9 55
*/
