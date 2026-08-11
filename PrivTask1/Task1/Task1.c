#include <stdio.h>
#define max 5
// Swap Arrays Function
void swaparrays(int arr1[], int arr2[])
{
    int temp;
    for (int i = 0; i < max; i++)
    {
        temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}

// Print Arrays Function
void printarrays (int arr1[], int arr2[])
{
    printf("The first array is: ");
    for (int i=0; i<max; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("The second array is: ");
    for (int i=0; i<max; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");
}
int main()
{
    // Defining the arrays
    int arr1 [max] = {1, 2, 3, 4, 5};
    int arr2 [max] = {6, 7, 8, 9, 10};

    // Printing the original arrays
    printf("Original arrays:\n");
    printarrays(arr1, arr2);


swaparrays(arr1,arr2);

// Printing swapped arrays
    printf("Swapped arrays:\n");
printarrays(arr1, arr2);

    return 0;
}

