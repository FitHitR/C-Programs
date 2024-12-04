#include<stdio.h>
#include<conio.h>
  	
// 15. printf the  sum of first n natural numbers ?.
//     n=4;  	
  	int main()
  	{
  	
  		int n;
  		printf("Enter the number :");
  		scanf("%d",&n);
  		int i=1;
  		int sum=0;
  		for(i; i<=n; i++)
  		{
  			
  			sum = sum +i;
  				printf("%d\n",i);
		}
			printf("sum of number : %d\n",sum);
  		 		
  		return 0;
	}
