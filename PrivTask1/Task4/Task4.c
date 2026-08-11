// Function to copy the contents of a char array to another, excluding the repeated chars, using only one loop (no nested loops)
/* This is new to me and I have looked up how to do this so I will try as much as I can to explain the logic behind it as I go along
to ensure a solid understanding. */
#include <stdio.h>

int CopyUniqueChars (char input[], char output[]) {

  /* Since there are 2^8 possible characters (a char is 1 byte or 8 bits, so 256 possible values), we will declare 
    an array to keep track of the characters seen so far */
    int seen[256] = {0};

 /* The logic here for the loop is that we will have two indexes; one for the input array and one for the output array.
 We want to make sure that we only copy unique characters. In the event of a repeated character, the output array will not be updated,
 and its index will stay where it is */
 int i = 0;
 int o = 0;


 for (i = 0; input[i] != '\0'; i++) { // Here \0 denotes the end of the array, so we will loop until we reach the end of it
  if (seen[input[i]] == 0) /* Essentially, input[i] is the character we're currently looking at.
  Each character is used as an index in the seen array. All the characters have a corresponding ASCII code 
  (which map out to 256 possible values, exactly like sized in the seen array. For example, if we see 'a' in input[i], that means
  the 97th place (because a equals 97 in ASCII code) will be set to 1 )*/ {

    seen[input[i]] = 1;
    output[o] = input[i]; // Here the unique character is copied to the output array
    o++; // The output index is incremented, to point towards the next position in the output array for the next unique character
  } 
 }
   output[o] = '\0';
  return o; // The function returns the number of unique characters copied to the output array
 }

 int main() {
    char choice[10];
    do
    {
    char myinput[100];
    char myoutput[100];
    printf("Enter a string, and I will copy the unique characters to another string: ");
    fgets(myinput, sizeof(myinput), stdin); // Read input from user

    int uniqueCount = CopyUniqueChars(myinput, myoutput); 
    printf("The unique characters are: %s\n", myoutput); 
    printf("Number of unique characters: %d\n", uniqueCount); 
    printf("The original string was: %s\n", myinput);
    printf("Do you want to enter another string? (y/n): ");
    fgets(choice, sizeof(choice), stdin);
    } while (choice[0] == 'y' || choice[0] == 'Y');

    return 0;
 }

