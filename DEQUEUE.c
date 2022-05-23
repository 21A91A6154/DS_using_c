/*
DEQUEUE
abcdefghijklmnopqrstuvwxyz
*/
#include<stdio.h>
#include<stdlib.h>
int *que,size,rear=-1,front=-1;
void enque_at_rear(int val)
{
	if((front==0 && rear==size-1) || rear+1==front)
	{
		printf("Queue if over flow\n");
	}
	else if(front==-1 && rear==-1)
	{
		front=0;
		rear=0;
		que[rear]=val;
	}
	else
	{
		rear=(rear+1)%size;
		que[rear]=val;
	}
}
void enque_at_front(int val)
{
	if((front==0 && rear==size-1) || rear+1==front)
	{
		printf("Queue if over flow\n");
	}
	else if(front==-1 && rear==-1)
	{
		front=0;
		rear=0;
		que[front]=val;
	}
	else
	{
		if(front==0)
		{
			front=size-1;
		}
		else
		{
			front--;
		}
		que[front]=val;
		
	}
}
int deque_at_rear(int val)
{
	if(front==-1 && rear==-1)
	{
		return -1;
	}
	if(front==rear)
	{
		val=que[front];
		front=-1;
		rear=-1;
		return val;
	}
	val=que[rear];
	if(rear==0)
	{
		rear=size-1;
	}
	else
	{
		rear--;
	}
	return val;
	
}
int deque_at_front(int val)
{
	if(front==-1 && rear==-1)
	{
		return -1;
	}
	if(front==rear)
	{
		val=que[front];
		front=-1;
		rear=-1;
		return val;
	}
	val=que[front];
	front=(front+1)%size;
	return val;
}
void display()
{
	int i,j;
	if(front==-1 && rear==-1)
	{
		printf("Queue undflow\n");
	}
	else
	{
		i=front;
		j=rear;
		while(i!=j)
		{
			printf("%d %d\n",i,que[i]);
			i=(i+1)%size;
		}
		printf("%d %d\n",j,que[j]);
	}
}
void main()
{
	int i,val,ch;
	scanf("%d",&size);
	que=(int *)calloc(size,sizeof(int));
	while(1)
	{
		printf("1.enque at rear 2.deque at rear 3.enque at front 4.deque at front 5.display 6.exit;");
		scanf("%d",&ch);
		if(ch==1)
		{
			//enque at rear,
			scanf("%d",&val);
			enque_at_rear(val);
		}
		else if(ch==2)
		{
			val=deque_at_rear(val);
			if(val==-1)
			{
				printf("Queue is undflow\n");
			}
			else
			{
				printf("%d\n",val);
			}
		}
		else if(ch==3)
		{
			scanf("%d",&val);
			enque_at_front(val);
		}
		else if(ch==4)
		{
			val=deque_at_front(val);
			if(val==-1)
			{
				printf("Queue is undflow\n");
			}
			else
			{
				printf("%d\n",val);
			}
		}
		else if(ch==5)
		{
			display();
		}
		else
		{
			break;
		}
	
	}
}
