# include<stdio.h>

int main(){
    int n;
    printf("Enter The value of you want multiplication table\n");
    scanf("%d", &n);
    int mul[10];
    for(int i = 0; i<10; i++){
        mul[i] = n *(i+1);
        printf("%d * %d = %d\n",n, i+1, mul[i]);
    }

    return 0;
}