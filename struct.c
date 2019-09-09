#include <stdio.h>

struct StudentData{
    char *stu_name[20];
    int stu_id;
    int stu_age;
};
int main()
{
    
     struct StudentData student;

     printf("enter name:\n");
     scanf("%s",student.stu_name);
     printf("enter id:\n");
     scanf("%d",&student.stu_id);
     printf("enter age:\n");
     scanf("%d",&student.stu_age);
     //student.stu_name = "Steve";
     //student.stu_id = 1234;
     //student.stu_age = 30;

     
     printf("Student Name is: %s", student.stu_name);
     printf("\nStudent Id is: %d", student.stu_id);
     printf("\nStudent Age is: %d", student.stu_age);
     return 0;
}
