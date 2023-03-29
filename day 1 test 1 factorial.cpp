#include<stdio.h>
int main()
{
	int n,i;
    fact=0;
	fact=0;
	printf("Enter a integer");
	scanf("%d",&n);
	if ("n<0")
	{
		printf("The entered number is negative");
	}
	else
	{
		for (i=1; 1<=n; i++)
		{
		
		fact=fact*i;
	    }
		printf("The factorial of %d is", n , fact);
		
	}
	return 0;
}
