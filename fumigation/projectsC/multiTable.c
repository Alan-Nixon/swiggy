#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num,temp;
	printf("Enter a size of array : ");
	scanf("%d",&num);
	 int Arr1[num],Arr2[num];
	 printf("Enter the values of array1 : ");
	 for(int i=0;i<num;i++)
	 {
		 scanf("%d",&Arr1[i]);
	 }
	 printf("Enter the values array2 : ");

	 for(int i=0;i<num;i++)
	 {
		 scanf("%d",&Arr2[i]);
	 }
	
	for(int i=0;i<num;i++)
	{
		temp=Arr1[i];
		Arr1[i]=Arr2[i];
		Arr2[i]=temp;
	}
	
	printf("array1 : ");
	for(int i=0;i<num;i++)
	 {
		 printf("%d,",Arr1[i]);
	 }
	printf("\narray2 : ");
	 for(int i=0;i<num;i++)
	 {
		 printf("%d,",Arr2[i]);
	 }
	return 0;
}

