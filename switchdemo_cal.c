#include <stdio.h>
#include<conio.h>
int main() 
{
  int a;
  printf("Enter the fist no==");
  scanf("%d",&a);
  int b;
  printf("Enter the Second no==");
  scanf("%d",&b);
  
  int c;
  printf("\nEnter the choise 1..Add\n");
  printf("Enter the choise 2..Sub\n");
  printf("Enter the choise 3..Mul\n");
  printf("Enter the choise 4..Div\n");
  scanf("%d",&c);
  
  switch (c)
   {
    case 1:
    c = a + b;
    printf("Addtion of two no==%d",c);
    break;
    
    case 2:
    c = a - b;
    printf("Sub of two no==%d",c);
    break;
    
    case 3:
    c = a * b;
    printf("Mul of two no==%d",c);
    break;
    
    case 4:
    c = a / b;
    printf("Addtion of two no==%d",c);
    break;
    default:
    printf("Enter tha valid number");
    break;
  }
    
  return 0;
}
