#include<stdio.h>

// print all  odd number foem 5 to 50.

	int main()
	{
		int i=5;
		for(i; i<=50; i++)
		{
			if(i % 2 != 0)
			{
				printf("%d\n",i);
			}
	    }
	    return 0;
    }
