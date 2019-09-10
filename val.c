#include<stdio.h>

void **rrr;

int main(void)
{
 //rrr=strdup("bbb");
 //free(rrr);
 rrr=malloc(sizeof(void **));
 *rrr=strdup("bbb");
	return 0;
}
