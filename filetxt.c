#include<stdio.h>
int main(){
    FILE *file;
    char ch;
    file = fopen("txtfile.txt","r");
    
    if(file==NULL){
        printf("File can not be opened.\n");
    }
    printf("Content:");
    while((ch=fgetc(file))!=EOF){
        printf("%c",ch);
    }
    fclose(file);
    return 0;
}