#include<stdio.h>

//22. print revers of the table form  a number n.

	int main()
	{
		int n;
		printf("Enter the number :");
		scanf("%d",&n);
		int i=10;
		
		for(i; i>=1; i--)
		{
			printf("%d\n",i*n);
		}
		return 0;
	}
		
		
		
