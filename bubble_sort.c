#include <stdio.h>

void Bubblesort(int arr[], int n){

    for(int i = 0; i < n - 1; i++){

        for(int j = 0; j < n - 1; j++){

            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void Printarray(int arr[], int size){
    
    for(int i = 0; i < size; i++){
        printf("%d", arr[i]);

    printf("\n");

    }
}


int main(){

    int arr[] = {3,1,6,2,4,8,7,11,10};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original Arrya: \n");

    Printarray(arr, n);

    Bubblesort(arr, n);

    printf("Sorted Arrya: \n");

    Printarray(arr, n);
    return 0;

}