# include<stdio.h>

void sliece(char *st, int m, int n){
    int i=0;
    while((i+m)<n){
        st[i]=st[i+m];
        i++;
    }
    st[i] = '\0';
}

int main(){
    char st[] = "Nilesh";
    char st1[] = "My name is Sariya Nilesh"; 
    sliece(st, 1, 4);
    sliece(st1, 1, 13);
    
    printf("%s\n",st);
    printf(st1);
    return 0;
}