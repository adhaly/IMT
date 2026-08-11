#include <stdio.h>

/*Here, we will have a function that can see and print how many times it has been called. I will use a "static" variable, to ensure that the 
variable is a global variable (i.e. works everywhere)*/

int CallCounter() {
    static int count = 0;
    count++;
    return count;
}
int main() {
    char choice[10];
    do
    {
        int callCount = CallCounter();
        printf("This function has been called %d times.\n", callCount);
        printf("Do you want to call the function again? (y/n): ");
        fgets(choice, sizeof(choice), stdin);
    } while (choice[0] == 'y' || choice[0] == 'Y');

    return 0;
}