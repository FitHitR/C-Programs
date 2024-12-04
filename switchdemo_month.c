#include <stdio.h>

int main() 
{
  int month;
  printf("Enter the number the 1 to 12 :=");
  scanf("%d",&month);
  
  switch (month) {
    case 1:
      printf("Janevari\t");
      printf("31 day");
      break;
    case 2:
      printf("feb\t");
         printf("28 day");
      break;
    case 3:
      printf("march\t");
      printf("31 day");
      break;
    case 4:
      printf("April\t");
      printf("30 day");
      break;
    case 5:
      printf("May\t" );
      printf("31 day");
      break;
    case 6:
      printf("June\t");
      printf("30 day");
      break;
    case 7:
      printf("Jule\t");
      printf("31 day");
      break;
      case 8:
      printf("Augest\t");
      printf("31 day");
      break;
      case 9:
      printf("Sept\t");
      printf("30 day");
      break;
	  case 10:
      printf("Oct\t");
      printf("31 day");
      break;
	  case 11:
      printf("Nov");
      printf("30 day");
      break;
      case 12:
      printf("Decmember");
      printf("31 day");
      break;
    default :
      printf("Enter tha valid number");
      break;
  }
    
  return 0;
}
