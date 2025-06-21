#include<stdio.h>
int main(){
    FILE *file,*file_e,*file_o;
    file = fopen("num.txt","r");
    file_e = fopen("even.txt","w");
    file_o = fopen("odd.txt","w");  
    int num;
    while((fscanf(file,"%d",&num)) != EOF){
        if(num%2==0){
            fprintf(file_e, "%d\n", num);
        }
        else{
            fprintf(file_o, "%d\n", num);
            
        }
       
    }
    fclose(file);
    fclose(file_e);
    fclose(file_o);
    return 0;
}