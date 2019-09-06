#include<stdio.h>
#include<stdlib.h>

int input(int row,int col,int x[][5])
{
 int r,c;
 for(r=0;r<row;r++)
 for (c=0;c<col;c++)
 scanf("%d",&x[r][c]);
}

int multiply(int first[][5],int second[][5],int m,int n,int p,int q,int prod[][5])
{
 int sum=0,r,c,k;
 for(r=0;r<m;r++){
 for(c=0;c<q;c++){
 for(k=0;k<p;k++){
 	sum=sum+first[r][k]*second[k][c];
 }
 prod[r][c]=sum;
 sum=0;
}
}
printf("the product of two matrices:\n");

for(r=0;r<m;r++)
{
 for(c=0;c<q;c++)

	printf("%d\t",prod[r][c]);
	printf("\n");
}
}

int main()
{	
	int first[5][5],second[5][5],prod[5][5],m,n,p,q;
	
 printf("enter the rows and columns of first matrix:\n");
 scanf("%d%d",&m,&n);
 printf("enter the first matrix:\n");
 input(m,n,first);
printf("enter the rows and columns of second matrix:\n");
 scanf("%d%d",&p,&q);
 if(n!=p)
 {
 printf("this matrix cannot be multiplied");
 exit(0);
 }
 printf("enter the second matrix:\n");	
input(p,q,second);
	multiply(first,second,m,n,p,q,prod);
	return 0;
}





	

