
#include<stdio.h>
int bubble_sorting(int *arr,int n)
{
	int p,i,j,temp,sc;
	for(p=1;p<=n;p++)
	{
		sc=0;
		for(i=0,j=1;j<n;i++,j++)
		{
			if(arr[i]>arr[j])
			{
				sc++;
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
		if(sc==0)
		{
			break;
		}
	}
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	bubble_sorting(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return  0;
}
