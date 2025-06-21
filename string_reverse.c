#include<stdio.h>
#include<string.h>
int main(){
char s[]="niet";
char s2[]={};
int len=strlen(s);
int start=0;
int end=len-1;
char rev;
while(start<end){
    rev=s[start];
    s[start]=s2[end];
    s2[end]=rev;
    start++;
    end--;
}
printf("Reversed string is %s",s2);

}

