#include <stdio.h>

int main(){

    int arr[] = {1,2,3,4,5,6,7};
    int n =  sizeof(arr) / sizeof(arr[0]);

    int key;
    printf("Enter key value: ");
    scanf("%d", &key);

    int found = 0;

    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int middle = low + (high - low) / 2;

        if(arr[middle] == key){
            found = middle;
        }else if(arr[middle] < key){
            low = middle + 1;
        }else{
            high = middle - 1;
        }

    }

    if (found == 0)
    {
        printf("Target value %d does not exist\n", key);
    }else{
        printf("Target value %d exist at indext %d", key, found);
    }
    
    return 0;
}