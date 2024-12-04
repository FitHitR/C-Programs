#include<stdio.h>

// 19. print all number 1 to 10 expcetion for 6.

	int main()
	{
		int i=1;
		for(i; i<=10; i++)
		{
			if(i==6)
			{
				printf("\n");
				continue;
				
			}
		 printf("%d\n",i);	
		}
		return 0;
		
	}

