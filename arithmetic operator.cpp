#include<stdio.h>
#include<math.h>
int main()
{
	int a,x,y,hi;
	printf("enter the first value");
	scanf("%d",&x);
	printf("enter the second value");
	scanf("%d",&y);
	printf("enter the choice");
	scanf("%d",&hi);
	
	switch(hi)
	{
		case 1:
		a=x+y;
		printf("addition of two numbers %d\n",a,x,y);
		break;
		case 2:
		a=x-y;
		printf("subtraction of two numbers %d\n",a,x,y);
	    break; 
		case 3:
		a=x*y;
		printf("multiplication of two numbers %d\n",a,x,y);
		break;
		case 4:
		a=x/y;
		printf("division of two numbers %d\n",a,x,y);
		break;
	}
}
