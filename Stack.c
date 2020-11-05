#include<stdio.h>

const int size=10;

int stack[size];

int top=-1;

void PUSH();
void POP();
void Display();


void main()
{
	int choice=0;
	do
	{
		printf("\nEnter operation\n");
		printf("1.PUSH\n");
		printf("2.POP\n");
		printf("3.Display Stack\n");
		printf("4.EXIT\n\t");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:PUSH(); Display();break;
			case 2:POP(); Display();break;
			case 3:Display();break;
			case 4:break;
			default:printf("\nEnter a given choice\n");
		}
	}while(choice!=4);	
}

void PUSH()
{
	if(top==size-1)
		printf("\n\nOverflow!!!\n");
	else
	{
		top++;
		printf("\nEnter the element to stack : ");
		scanf("%d",&stack[top]);
	}
}

void POP()
{
	if(top==-1)
		printf("\n\nUnderflow!!\n");
	else
	{
		printf("Element popped is %d\n",stack[top]);
		top--;
	}
}

void Display()
{
	if(top==-1)
		printf("\nUnderflow!!!");
	else
	{
		for(int i=0;i<=top;i++)
			printf(" %d",stack[i]);
	}
}
