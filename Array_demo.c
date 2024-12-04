#include<stdio.h>
#include<string.h>

	int main()
	{
		int arr_1[] = {1,2,3,4,5,6};
		char arr_2[] = {"Ranjeet"};
		
		
		char arr_3[200];
		char arr_4[] = {"\n Mundfane"};
		printf("%d",arr_1[4]);
		printf("%s",arr_2);
		
		char sr_name[12];
		strcpy(arr_3,arr_4);
		puts(arr_3);
		
	//	char a= strcat(arr_3,arr_2);
		
		int b= strlen(arr_2);
		
	//	printf("two join string == %s",a);
		printf("Sring of length : Ranjeet : ==%d",b);
		
		return 0;
	}
