#include<stdio.h>

int main()
{
	int i,j;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		if((i+j)>=2)
			printf("*");
		else
			printf(" ");
		printf("\n");
		
	}
	return 0;
}
