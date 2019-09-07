#include<stdio.h>

int main()
{

int a[5]={1,2,3,4};
int i;
for(i=0;i<4;i++)
printf("%d\n",a++);
printf("%d\n",a+1);
return 0;
}

