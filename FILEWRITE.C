#include<stdio.h>
int main(){
    FILE *file;
    char str[100];
    file = fopen("txtfile.txt","w");
    if(file==NULL){
        printf("File can not be opened.\n");
        return 0;
    }
    printf("Enter content:");
    fgets(str,sizeof(str),stdin);
    fprintf(file,"%s",str);
    printf("successful");
    fclose(file);
    
    return 0;
}