#include<stdio.h>
#include<conio.h>
    
	  // function call by value
	
	int add(int x , int y)
	{
		int z= x + y;
		return z;
	}
	
	int main()
	{
		int a,b,c;
		printf("Enter two valu addtion:");
		scanf("%d%d",&a ,&b);
		
		c = add(a,b);
		printf("Result == %d",c);
		return 0;
	}
