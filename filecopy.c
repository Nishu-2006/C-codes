#include<stdio.h>
int main(){
    FILE *file, *file1;
    char str[100];
    file = fopen("txtfile.txt","w");
    file1=fopen("txtfile1.txt","w");
    if(file==NULL){
        printf("File can not be opened.\n");
        return 0;
    }
    printf("Enter content:");
    fgets(str,sizeof(str),stdin);
    fprintf(file,"%s",str);
    fprintf(file1,"%s",str);
    printf("successful");
    fclose(file);
    
    return 0;
}