// Author: Muhammad F. Khan
// Github: https://github.com/M-Faheem-Khan/Reverse-Engineering


#include <stdio.h> // Standard Input / Output
#include <stdlib.h> // Standard Library
#include <string.h> // Strings Library

// definition
#define BUFFER 12 // read buffer

// main function
int main(void) {
    char flag[] = "RevEng{Level_2_flag_Mangroves}"; // level flag
    char correct_password[] = "Swamps are full of Mangroves";
    char password[BUFFER]; // declaring variable for userinput

    // asking the user for password
    printf("Password: "); // prompt
    fgets(password, BUFFER, stdin); // reading user input

    // strcmp(): Compares two strings
    // Returns: 0 if both strings match

    // if correct password print flag
    if (strcmp(correct_password, password) == 0){
        printf("Flag: %s\n", flag);
    } else {
        printf("Invalid Password\n");
    }

    return 0;
}
