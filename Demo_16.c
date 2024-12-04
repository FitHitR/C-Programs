#include<stdio.h>
#include<conio.h>
  	
// 16. printf the table of input numbers by the user ?.
//     n=2;  	
  	int main()
  	{
  	
  		int n;
  		printf("Enter the number :");
  		scanf("%d",&n);
  		
  		int i=1;
  		
  		for(i; i<=10; i++)
  		{
  			
  			printf("%d\n",n*i); 
	   }		 		
  		return 0;
	}
