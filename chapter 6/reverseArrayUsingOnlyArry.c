# include<stdio.h>

void reverseArray(int *arr, int n){
    // i=0 <--> n-i-1 
    for(int i=0 ; i<n/2 ; i++){
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }

    
}

int main(){
    int arr[8] = {1,2,3,4,5,6,7,8};
    reverseArray(arr, 8);
    for(int i=0 ; i<8 ;i++){
        printf("%d Elelment of array is : %d \n", i+1, arr[i]);
    }
    return 0;
}