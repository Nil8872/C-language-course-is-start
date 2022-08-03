# include<stdio.h>
# include<string.h>

int main(){
    // char *ptr = "Nielsh";
    char ptr[] = "Nielsh Sariya";
    // ptr = "Nilu"; //--> we are not initilize ptr in array char ptr[] type init in
    // ptr = "Nilesh Sariya";
    // puts(ptr);
    // printf("%d", strlen(ptr));

    for(int i=0; i<strlen(ptr);i++){
        printf("%c", ptr[i]);
        // ptr++;
    }


    return 0;
}