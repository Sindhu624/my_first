#include<stdio.h>

int add(int a[2][2],int b[2][2])
{
int i,j;
for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d ",a[i][j]+b[i][j]);
		}printf("\n");
		
	}
}

int input(int a[2][2])
{
int i,j;
printf(" enter the matrix values");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			
			scanf("%d",&a[i][j]);
		}
		
	}

}

int main()
{
int a[2][2],b[2][2],i,j;
printf("input matrix A");
input(a);
printf("input matrix B");
input(b);	
printf("addition of two matrices\n");
add(a,b);
return 0;
}
