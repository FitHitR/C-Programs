#include<stdio.h>
#include<conio.h>
  	
	  // 9. write a program to check if a student passed or failed.
	  //marks > 30 is pass 
  	  //marks < 30 is fail ;
  	int main()
  	{
  		int marks;
  		printf("Enter the marks :");
  		scanf("%d",&marks);
  		if(marks > 30)
  		{
		  printf(" pass :");
	    }
	    else
	    {
	    	printf("fail :");
		}
  		
  		
  		return 0;
	}
