#include<stdio.h>
int find_number(int *arr,int n,int a)
{
	static int i=0;
	if(i==n)
	{
		return 0;
	}
	if(arr[i]==a)
	{
		return 1;
	}
	i++;
	    return 	find_number(arr,n,a);
}
int main()
{
	int n,i,a,k,c;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&a);
	k=find_number(arr,n,a);
	if(k==0)
	{
		printf("No\n");
	} 
	 else
	{
		printf("%d\n",k);
	 	printf("yes");
	}
	return 0;
}
