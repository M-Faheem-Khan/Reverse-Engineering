// Author: Muhammad F. Khan
// Github: https://github.com/M-Faheem-Khan/Reverse-Engineering

// Libraries
#include <stdlib.h> // Standard Library
#include <stdio.h>  // Standard Input/Output
#include <string.h> // String Library for strcmp() function


// main function
int main(void) {
    // variables
    char flag[] = "RevEng{Flag_1_easy_peasy}"; // flag variable
    char password[100]; // password variable
    
    // Asking user for password
    printf("Please Enter the password to get the challenge flag!\n");
    printf("Password: ");
    fgets(password, 100, stdin); // reading from standard input
    
    // Comparing passwords
    // strcmp(): string compare(string1, string2)
    // Returns: 0 if strings match

    if (strcmp("Password100", password) == 0) {
        printf("Flag: %s\n", flag);
    } else {
        printf("Invalid Password. Please try again\n");
    }

    return 0;
}
