#include<stdio.h>
struct student{
        char name[20];
        int rollno;
        char course[20];
    };
void scan_and_display(struct student s){
    printf("Enter name:");
    scanf("%s",s.name);
    printf("Enter roll no:");
    scanf("%d",&s.rollno);
    printf("Enter course:");
    scanf("%s",s.course);
    printf("NAME - %s\n",s.name);
    printf("ROLL NO. - %d\n",s.rollno);
    printf("COURSE - %s\n",s.course);
}
int main(){
    struct student s1;
    scan_and_display(s1);
}