#include <stdio.h>

// The task here will be to remove the repeated numbers from an array, and returns the array of unique numbers. Also similar to the last two.
int RemoveRepeatedNumbers (int input[], int output[], int size) {
 int seen[100] = {0};
 int i = 0;
 int o = 0;
 for (i = 0; i < size; i++) { // Instead of \0, we'll use the size of the array, because \0 works only for char arrays and this is an int array
    if (seen[input[i]] == 0) {
     seen[input[i]] = 1;
     output[o] = input[i];
     o++;
    }
 }
 return o; // Return the size of the output array
}

 int main() {
    char choice[10];
    int myinput[100];
    int myoutput[100];
printf("Enter the size of the array (up to 100): ");
    int i;
    scanf("%d", &i);
    printf("Enter %d integers (0-99) separated by spaces: ", i);
    for (int j = 0; j < i; j++) {
        scanf("%d", &myinput[j]);
    }

    int newSize = RemoveRepeatedNumbers(myinput, myoutput, i);

    /* To ensure that there is actually a repeated number, and since all the numbers in the array must at least be counted once, then newSize must be less than the original size
    so there can be repeated numbers */
    if (newSize < i) {
        printf("The array after removing repeated numbers is: ");
        for (int j = 0; j < newSize; j++) {
            printf("%d ", myoutput[j]);
        }
        printf("\n");
    } else {
        printf("No repeated numbers were found in the array.\n");

    return 0;
 }
}

