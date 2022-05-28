//binary search
#include<stdio.h>
int find_number(int *arr,int n,int a,int i,int j)
{
	int me;
	if(i>j)
    {
    	return 0;
	}
		me=(i+j)/2;
		if(arr[me]==a)
		{
			return 1;
		}
		else if(arr[me]>a)
		{
			j=me-1;
		}
		else if(arr[me]<a)
		{
			i=me+1;
		}
 return find_number(arr,n,a,i,j);
}
int main()
{
	int n,i=0,k,a,j,arr[100];
	scanf("%d",&n);
	j=arr[n-1];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&a);
	k=find_number(arr,n,a,0,n-1);
	if(k==1)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}
