#include<stdio.h>

int main()
{
 int c;
 printf("who is the captain of the indian cricket team?\n");
 printf("0.Dhoni\n1.Virat\n2.Pandya\n3.Hardick\n");
 printf("enter your choice:\n");
 scanf("%d",&c);
 switch(c)
 {
 	case 0:	printf("Wrong answer!!\nDhoni was the ex-captain of indian 			cricket team\n");
		break;
	case 1:printf("Right answer!!\n");
		break;
	case 2:printf("Wrong answer!!Pandya is team player\n");
		break;
	case 3:printf("Wrong answer!!Hardick is team player\n");
		break;
	default:printf("choose any of the optipns plzz!!!");
		break;
}
return 0;
}

