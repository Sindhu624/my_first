#include<stdio.h>
#include<string.h>

int main()
{

char a[6]="deepa";
char b[10]="anjali";

strcpy(a,b);
printf("%s\n",a);


//strncpy ex
char src[] = "Deepanjali"; 
char dest[]="sindhu0abcde"; 
 
strncpy(dest, src, 7); 
printf("Copied string: %s\n", dest); 

//str str
char s1[] = "Deepa has a pet"; 
char s2[] = "pet"; 
char* p; 
  
p = strstr(s1, s2); 
  
     
 if (p) 
{ 
        printf("String found\n"); 
        printf("First occurrence of string '%s' in '%s' is '%s'", s2, s1, p);
} 
  else
        printf("String not found\n"); 
  

return 0;
}
