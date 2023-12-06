#include <stdio.h>

int binary_search(int arr[], int low, int high, int key){

    while (low <= high)
    {
        int middle = low + (high - low) / 2;
        
        if(arr[middle] == key){
            return middle;

        }else if (arr[middle] < key)
        {
            low = middle + 1;
        }else{
            high = middle - 1;
        }

    }  

     // No Match
    return 0;

}

int main(){

    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr) / sizeof(arr[0]);

    // accept target value from user
    int target;
    printf("Enter targer value: ");
    scanf("%d", &target);

    // call the function
    int results = binary_search(arr, 0, n - 1, target);


    if (results == 0){
        printf("Target Value %d does not exist in the array", target);
    }else{
         printf("Target Value %d exist at index %d", target, results);
    }

    return 0;

}