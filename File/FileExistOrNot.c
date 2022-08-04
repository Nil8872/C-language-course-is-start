# include<stdio.h>

int main(){
    FILE * ptr;
    ptr = fopen("Nilo.txt","r");

    if(ptr==NULL){
        printf("File is not Exist!");
    }
    else {
        printf("file is Exist!");
    }
    fclose(ptr);
    return 0;
}