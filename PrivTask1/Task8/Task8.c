#include <stdio.h>

// The task here is to find the maximum and minimum values in an array of integers, and their indexes
// Since we can only return one value at a time, we will use two separate functions to find the maximum and minimum values along with their indexes.

int findmax (int arr[], int size) {
    int max_index = 0; 
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[max_index]) {
            max_index = i;
        }
    }
    return max_index;
}

int findmin (int arr[], int size) {
    int min_index = 0; 
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[min_index]) {
            min_index = i;
        }
    }
    return min_index;
}

int main() {
    char choice;
    
    do {
        int size;
        int arr[100];
        
        printf("Enter the size of the array (1-100): ");
        scanf("%d", &size);
        
        if (size <= 0 || size > 100) {
            printf("Invalid size! Please run the program again.\n");
            return 1; // Exit the program with an error code
        }

        printf("Enter %d integers separated by spaces: ", size);
        for (int i = 0; i < size; i++) {
            scanf("%d", &arr[i]);
        }

        // Call your functions to get the winning indexes
        int max_idx = findmax(arr, size);
        int min_idx = findmin(arr, size);

        // Print the results using the indexes your functions returned
        printf("\n--- Results ---\n");
        printf("The Maximum value is %d, found at index [%d]\n", arr[max_idx], max_idx);
        printf("The Minimum value is %d, found at index [%d]\n", arr[min_idx], min_idx);

        printf("Do you want to enter another array? (y/n): ");
        scanf(" %c", &choice); 

    } while (choice == 'y' || choice == 'Y');

    return 0;
}