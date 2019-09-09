#include<stdio.h>

//without pointers
int strcmp_arry(char *src1, char *src2)
{
    int i=0;
    while((src1[i]!='\0') || (src2[i]!='\0'))
    {
        if(src1[i] > src2[i])
            return 1;
        if(src1[i] < src2[i])
            return 1;
        i++;
    }return 0;
}

   
//with pointers
int strcmp_ptr(char *src1, char *src2)
{
    int i=0;
    while((*src1!='\0') || (*src2!='\0'))
    {
        if(*src1 > *src2)
            return 1;
        if(*src1 < *src2)
            return 1;
        src1++;
        src2++;
    }return 0;
    
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        

int main(void)
{
    char a[] = "string";
    char b[] = "string";
    printf(" value is %d\n",strcmp_arry(a,b));
    printf(" value is %d\n",strcmp_ptr(a,b));
  
}
