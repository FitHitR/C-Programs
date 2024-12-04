#include<stdio.h>
#include<conio.h>
  	
// 18. keep taking numbers as input from user unstil user enters a number which is multiple of 7  ?.
//     n=2;  	
  	int main()
  	{
  	
  		int n;
  		do {
		  printf("Enter the number :");
  		  scanf("%d",&n);
           
		   printf("%d\n ",n); 		
  	      if(n%7 == 0)
  			break;
  		
			
	   }while(1);	 		
  		return 0;
	}
