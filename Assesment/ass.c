#include<stdio.h>
void main()
{
	int arr1[4];
	int arr2[4];
	int i,j;
	printf("\n\n----------Matrix 1 Elemnts : ----------\n\n");
	for(i=0;i<4;i++)
	{
			printf("Enter elements  : ",i);
			scanf("%d",&arr1[i]);
		
	}
	
	
		printf("\n\n----------Matrix 2 Elemnts : ----------\n\n");
	for(i=0;i<4;i++)
	{
			printf("Enter elements  : ",i);
			scanf("%d",&arr2[i]);
		
	}
	printf("\n\n----------Result: Multiplication  Matrix : ----------\n\n");
	
	for(i=0;i<4;i++)
	
		{
			printf("%d\t",arr1[i]*arr2[i]);
		}
		printf("\n");
	}
	







