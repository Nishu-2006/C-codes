#include<stdio.h>
int main(){
    struct student{
        char name[10];
        int rollno;
        char course[10];
        struct details{
            int age;
            char address[20];
        }d;}s;
    printf("Enter name:");
    scanf("%s",s.name);
    printf("Enter roll no:");
    scanf("%d",&s.rollno);
    printf("Enter course:");
    scanf("%s",s.course);
    printf("Enter age:");
    scanf("%d",s.d.age);
    printf("Enter address:");
    scanf("%s",s.d.address);
    printf("--------------------------------------------------\n");
    printf("NAME - %s\n",s.name);
    printf("ROLL NO. - %d\n",s.rollno);
    printf("COURSE - %s\n",s.course);
    printf("Age - %d\n",s.d.age);
    printf("Address - %s\n",s.d.address);
}


