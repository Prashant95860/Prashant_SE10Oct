#include<stdio.h>
void main()
{
	int a,b;
	
	printf("\nEnter A : ");
	scanf("%d",&a);
	printf("\nEnter B : ");
	scanf("%d",&b);
	
	printf("\nA = %d, B = %d",a,b);
	printf("\n\nAddition : %d",a+b);
	printf("\nSubstraction : %d",a-b);
	printf("\nMultiplication : %d",a*b);
	printf("\nDivision : %f",(a/(float)b));
	
}