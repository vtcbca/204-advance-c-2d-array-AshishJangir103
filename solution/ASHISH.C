/* Write a menu driven program to perform following operation using U.D.F.
1. Sum of digit
2. Pelindrom No.
3. Armstrong No.
4. Square serioes.
5. Exit.
Author : Ashish Jangir.
Date : 22-03-22*/

#include<stdio.h>
#include<conio.h>
int menu();
int sod();
int palin(int);
void arm(int);
void sqs();

void main()
{
	int a,b,c;
	char yn;
	do
	{
		clrscr();
		c=menu();
		switch(c)
		{
			case 1:
				b=sod();
				printf("\nSum of digites is %d.",b);
				break;
			case 2:
				printf("Enter any No. : ");
				scanf("%d",&a);
				b=palin(a);
				if(a==b)
				{
					printf("%d is Palindrom No.",a);
				}
				else
				{
					printf("%d is not Palindrom No.",a);
				}
				break;
			case 3:
				printf("Enter any No. : ");
				scanf("%d",&a);
				arm(a);
				break;
			case 4:
				sqs();
				break;
			case 5:
				exit(0);
				break;


		}
		printf("\n________________________________________________________________________________");
		printf("\n Do you want to continue ? (Yes=Y/y,No=N/n).");
		flushall();
		scanf("%c",&yn);
	}while(yn=='y'||yn=='Y');
	getch();
}


int menu()
{
	int choice;
	printf("\n\t\t\t\t--: MENU :-- \n");
	printf("--------------------------------------------------------------------------------");
	printf("\n\t 1. Sum of digites");
	printf("\n\t 2. Palindrom number");
	printf("\n\t 3. Armstrong number");
	printf("\n\t 4. Square series");
	printf("\n\t 5. Exit");
	printf("\n--------------------------------------------------------------------------------");
	printf("\n\tEnter choice :");
	scanf("%d",&choice);
	printf("--------------------------------------------------------------------------------");
	return choice;
}

int sod()
{
	int p,q=0,r=0;
	printf("Enter any No. : ");
	scanf("%d",&p);
	while(p!=0)
	{
		q=p%10;
		r=r+q;
		p=p/10;
	}
	return r;
}
int palin(int x)
{
	int y=0,z=0;
	while(x!=0)
	{
		y=x%10;
		z=(z*10)+y;
		x=x/10;
	}
	return z;
}
void arm(int x)
{
	int r=x,y=0,z=0;
	while(x!=0)
	{
		y=x%10;
		z=z+(y*y*y);
		x=x/10;
	}
	if(r==z)
	{
		printf("%d is Armstrong No.",r);
	}
	else
	{
		printf("%d is not Armstrong No.",r);
	}
}
void sqs()
{
	int i,j,n;
	printf("Enter any No. : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	       j=i*i;
	       printf("%d,",j);
	}
	printf("\b.");
}
i