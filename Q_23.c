#include<stdio.h>

// calculat the sum of all numbers betwen 5 to 50.

	int main()
	{
		int i=5;
		int sum=0;
		for(i; i<=50;i++)
		{
			sum = sum + i;
		}
		printf("sum of 5 to 50 number is : %d\n",sum);
		return 0;
	}
