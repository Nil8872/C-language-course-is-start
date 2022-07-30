# include<stdio.h>
void sumAvg(int a, int b, int* sum, float* avg);
int main(){
    int a=5,b=8, sum;
    float avg;
    sumAvg(a,b,&sum,&avg);
    printf("The value of sum is: %d\n", sum);
    printf("The value of avg is: %f\n", avg);
    return 0;
}
void sumAvg(int a, int b, int* sum, float* avg){
    *sum = a+b;
    *avg = (float)(a+b)/2;
}