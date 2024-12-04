#include<stdio.h>
#include<conio.h>
  	
	  // 10. write a program to give grades to a student .
	  //       marks < 30 is c  
  	  // 30 >= marks < 70 is B
  	  // 70 >= marks < 90 is A
  	  // 90 >= marks < 100 is A++
		  	int main()
  	{
  		int marks;
  		printf("Enter the marks :");
  		scanf("%d",&marks);
  		if(marks < 30 )
  		{
		  printf(" grades = C :");
	    }
	    else if(marks >= 30 && marks < 70)
	    {
	    	printf("greades = B :");
		}
		else if(marks >= 70 && marks < 90)
	    {
	    	printf("greades = A :");
		}
		else if(marks >= 90 && marks < 100)
	    {
	    	printf("greades = A :");
		}
  		
  		
  		return 0;
	}
