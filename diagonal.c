#include<stdio.h>

int main()
{
int a[5][5],i,j;
printf("Enter a 4*4 matrix:");
for(i=0;i<4;i++)
for(j=0;j<4;j++)
scanf("%d",&a[i][j]);

printf("the diagonal elements are\n");
for(i=0;i<4;i++)
{
	for(j=0;j<4;j++)
	{
		if((i==j)||(i+j==3))
                	printf("%d",a[i][j]);
	
		else
			printf(" ");
	}
	printf("\n");
}
return 0;
}			
