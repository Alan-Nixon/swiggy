#include <stdio.h>
#include <stdlib.h>
int main()
{
	int NumberOfDay;
	printf("Enter a number between 1 and 7 \nto show corresponding day : ");
	scanf("%d",&NumberOfDay);
	switch(NumberOfDay)
	{
		case 1:
		printf("sunday");
		break;
		
		case 2:
		printf("monday");
		break;
		
		case 3:
		printf("tuesday");
		break;
		
		case 4:
		printf("wednesday");
		break;
		
		case 5:
		printf("thursday");
		break;
		
		case 6:
		printf("friday");
		break;
		
		case 7:
		printf("saturday");
		break;
		
		default :
		printf("Invalid Entry");
		
	}
	
	return 0;
}
