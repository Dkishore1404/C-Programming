#include<stdio.h>
int main ()
{
	int n, remainder;
	printf("enter the number");
	scanf("%d",&n);
	
	while(n!=0)
	{
		remainder=n%10;
		printf("reverse the number %d",n);
		n=n/10;
	}
}
