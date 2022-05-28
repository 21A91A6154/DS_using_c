#include<stdio.h>
int max(int *arr,int n)
{
	int maxi=arr[0],ind=0,i;
	for(i=0;i<=n;i++)
	{
		if(maxi<arr[i])
		{
			maxi=arr[i];
			ind=i;
		}
	}
	return ind;
}
int selection_sort(int *arr,int size)
{
	int maxi,i,temp;
	for(i=size-1;i>=0;i--)
	{
	    	maxi=max(arr,i);
	    	temp=arr[i];
         	arr[i]=arr[maxi];
	        arr[maxi]=temp;	
	}
}
int main()
{
	int n,i,max=0,k=0,temp=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	selection_sort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
