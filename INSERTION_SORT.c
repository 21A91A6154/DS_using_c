#include<stdio.h>
int insert_number(int *arr,int n)
{
	int i,j,temp=0;
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		for(j=i-1;j>=0;j--)
		{
			if(arr[j]<temp)//for desending order change signs
			{
				arr[j+1]=temp;
				break;
			}
			else if(arr[j]>temp)////for desending order change signs
			{
			    	arr[j+1]=arr[j];
			}
		}
		if(j==-1)
		{
			arr[0]=temp;
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
	insert_number(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
