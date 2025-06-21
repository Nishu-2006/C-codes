#include<stdio.h>
int main(){
    struct student{
        char name[10];
        int rollno;
        char course[10];
    };
    struct student s;
    printf("Enter name,rollno,course : ");
    scanf("%s",s.name);
    scanf("%d",&s.rollno);
    scanf("%s",s.course);
    printf("NAME - %s\n",s.name);
    printf("ROLL NO. - %d\n",s.rollno);
    printf("COURSE - %s\n",s.course);
}
