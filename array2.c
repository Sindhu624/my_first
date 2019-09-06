#include<stdio.h>

int main()
{
	int a[3][3],b[3][3],i,j;
	printf(" enter the A matrix values");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			
			scanf("%d",&a[i][j]);
		}
		
	}
	printf(" enter the B matrix values");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
		
	}

	printf(" the 3*3 matrix A\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		
			printf("%d",a[i][j]);
		}
			printf("\n");
					
	}
	printf(" the 3*3 matrix B\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			
			printf("%d",b[i][j]);
		}
			printf("\n");
					
	}
return 0;
}
