// Numbers corresponding to Months
#include<stdio.h>
int main()
{
	int x;
    printf("Please enter a numeric value");
	scanf("%d",&x);
	switch(x)
	{
		case(1):
			printf("January");
			break;
			
		case(2):
			printf("Febuary");
			break;
		case(3):
			printf("March");
			break;
		case(4):
			printf("April");
	        break;
		case(5):
		    printf("May");
			break;
		case(6):
		     printf("June");
			 break;
		case(7):
		     printf("July");
			 break;
		case(8):
			printf("August");
			break;
		case(9):
			printf("September");
			break;
		case(10):
			printf("October");
			break;
		case(11):
			printf("November");
			break;
		case(12):
			printf("December");
			break;
	default:
	 	printf("The value doesn't correspond to any month");
		 	
			
	return 0;	
	}
}
