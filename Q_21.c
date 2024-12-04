#include<stdio.h>

//21.  print the factorial of a number n.

	int main()
	{
		int n;
		printf("Enter the number :");
		scanf("%d",&n);
		int fact=1;
		int i=1;
		for(i; i<=n; i++)
		{
			fact = fact * i;
		}
			printf("Factorial no is : %d\n",fact);
		return 0;
	}
