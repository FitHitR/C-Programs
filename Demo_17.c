#include<stdio.h>
#include<conio.h>
  	
// 17. keep taking numbers as input from user unstil user enters an odd number ?.
//     n=2;  	
  	int main()
  	{
  	
  		int n;
  		do {
		  printf("Enter the number :");
  		  scanf("%d",&n);
           
		   printf("%d\n ",n); 		
  	      if(n%2 != 0)
  			break;
  		
			
	   }while(1);	 		
  		return 0;
	}
