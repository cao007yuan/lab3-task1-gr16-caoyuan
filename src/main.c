/* hello.c */
#include <stdio.h>
struct StudentData
{
char *stu_name;
int stu_id;
int stu_age;
};
int main()
{
  struct StudentData student;
  student.stu_name = "caoyuan";
  student.stu_id = 202349;
  student.stu_age =25;
	printf ("Hello ,%s",student.stu_name);
  printf ("\nStudent Id is:%d",student.stu_id);
	printf ("\nStudent Id is:%d",student.stu_age);

return 0;
}
