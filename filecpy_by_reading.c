#include<stdio.h>
int main(){
    FILE *file,*file1;
    char ch;
    file = fopen("txtfile.txt","r");
    file1= fopen("txtfile1.txt","w");
    
    if(file==NULL){
        printf("File can not be opened.\n");
    }
    printf("Content:");
    while((ch=fgetc(file))!=EOF){
        printf("%c",ch);
        fputc(ch,file1);
    }
    fclose(file);
    fclose(file1);
    return 0;
}