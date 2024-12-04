#include<stdio.h>
#include<conio.h>
  	
// 13. write a program to find if a charater entered by user is upper case or not ?.
  	
  	int main()
  	{
  		int ch;
  		printf("Enter the number :");
  		scanf("%c",&ch);
  		
  		
  		printf("%c",ch > 'a' && ch <'z');
  		
  		
  		return 0;
	}
