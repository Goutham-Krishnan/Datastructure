#include<stdio.h>
#define size 10



int arr[size];

int top=-1,rear=-1;
void Insert();
void Delete();
void Display();

void main()
{
	int choice=0;
	do
	{
		printf("\nEnter operation\n");
		printf("1.Insert an element\n");
		printf("2.Delete an element\n");
		printf("3.Display element\n");
		printf("4.EXIT\n\t");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:Insert(); Display();break;
			case 2:Delete(); Display();break;
			case 3:Display();break;
			case 4:break;
			default:printf("\nEnter a given choice\n");
		}
	}while(choice!=4);
}

void Insert()
{
	if((top==(size-1) && rear==0)|| top==(rear-1))
	{
		printf("\nOverflow!!\n");
	}
	
	else
	{
		if(top==-1)
			top=rear=0;
		
		else if(top==size-1)
			top=0;
		
		else
			top++;
		
		printf("\nEnter the element to be inserted : ");
		scanf("%d",&arr[top]);
	}
}

void Delete()
{
	if(top==-1)
		printf("\nUnderflow!!\n");
	
	else
	{
		printf("The element popped is %d",arr[rear]);
		
		if(top==rear)
			top=rear=-1;
		
		else if(rear==size-1)
			rear=0;
		
		else
			rear++;
	}
}
		
void Display()
{
	printf("\nThe array elements are\n");
	int i;
	
	if(top==-1){
		printf("Under flow!! no elements to display\n");
		return;
	}
	if(rear<=top)
		for(i=rear;i<=top;i++)
			printf(" %d",arr[i]);
	else
	{
		for(i=rear;i<size;i++)
			printf(" %d",arr[i]);
		for(i=0;i<=top;i++)
			printf(" %d",arr[i]);
	}
}
