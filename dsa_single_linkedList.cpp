#include <stdio.h>

int main() {
    int idnumber[30]; // Array to hold up to 30 integers
    int n; // Number of integers the user wants to input

    // Ask the user how many numbers they want to input
    printf("How many ID numbers do you want to enter (max 30): ");
    scanf("%d", &n);

    // Check if the number is within the bounds of the array
    if (n > 30) {
        printf("You can only enter up to 30 numbers.\n");
        return 1; // Exit with an error code
    }

    // Ask the user to input the numbers
    printf("Enter %d ID numbers:\n", n);
    for (int i = 0; i < n; i++) {
    	printf("enter the %d number:  \n",i+1);
        scanf("%d", &idnumber[i]); // Read each number into the array
    }

    // Output the numbers
    printf("You entered:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", idnumber[i]); // Print each number
    }
  
    return 0;
}
