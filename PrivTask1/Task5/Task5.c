#include <stdio.h>

/* This will be kind of similar to the previous task. Instead, I will make a counter for each character, and the largest count will be returned. */
int MostRepeatedChar (char input[], char output[]) {


int counter[256] = {0};
 int i = 0;
 int o = 0;
 int maxCount = 0;


 for (i = 0; input[i] != '\0'; i++) { 
  counter[input[i]]++; // Increment the counter for the current character
  
// The following if statement indicates that if the current character's count is greater than maxCount, then it'll be updated to be the same value as the current character's count.
  if (counter[input[i]] > maxCount) {
   maxCount = counter[input[i]];
   // The output array will be updated to contain the most repeated character, and the null terminator will be added to the end of it. 
   output[0] = input[i];
   output[1] = '\0';
  }
 }
  return maxCount;
 }

 int main() {
    char choice[10];
    do
    {
    char myinput[100];
    char myoutput[100];
    printf("Enter a string, and I will find the most repeated character: ");
    fgets(myinput, sizeof(myinput), stdin); // Read input from user

    int maxCount = MostRepeatedChar(myinput, myoutput); 
    /* To ensure that there is actually a repeated character, and since all the characters in the string must at least be counted once, then maxCount must be greater than 1
    so there can be a most repeated character */
    if (maxCount > 1) {
        printf("The most repeated character is: %s\n", myoutput); 
        printf("Number of times it was repeated: %d\n", maxCount); 
    } else {
        printf("No character was repeated in the string.\n");
    }
    printf("Do you want to enter another string? (y/n): ");
    fgets(choice, sizeof(choice), stdin);
    } while (choice[0] == 'y' || choice[0] == 'Y');

    return 0;
 }

