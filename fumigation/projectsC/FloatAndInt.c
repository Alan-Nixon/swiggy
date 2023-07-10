#include <stdio.h>
#include <stdlib.h>
int main(){
	int Number1;
    float Number2,sum;
	printf("Enter a Integer number : ");
	scanf("%d",&Number1);
	printf("Enter a float Number : ");
	scanf("%f",&Number2);
    sum=Number1+Number2;
    printf("%.2f",sum);
    return 0;
}
