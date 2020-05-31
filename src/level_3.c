// Author: Muhammad F. Khan
// Github: https://github.com/M-Faheem-Khan/Reverse-Engineering


#include <stdio.h> // Standard Input / Output
#include <stdlib.h> // Standard Library
#include <string.h> // Strings Library

// definition
#define BUFFER 29 // read buffer

// main function
int main(void) {
    int flag[] = {82,101,118,69,110,103,123,76,101,118,101,108,95,51,95,97,115,99,105,105,95,118,97,108,117,101,115,125};
    char correct_password[BUFFER] = {65,115,99,105,105,32,86,97,108,117,101,115,32,97,114,101,32,112,114,101,116,116,121,32,99,111,111,108};
    char password[BUFFER]; // declaring variable for userinput
    char password_array[BUFFER];

    // asking the user for password
    printf("Password: "); // prompt
    fgets(password, BUFFER, stdin); // reading user input
    
    // strcpy(array_to_copy_characters_to, string);
    // Copies string to character array
    strcpy(password_array, password); // creating user input to char array


    // strcmp(): Compares two strings
    // Returns: 0 if both strings match
    if (strcmp(correct_password, password_array) == 0){ // if correct password print flag
        
        // printing flag character by character
        printf("Flag: ");
        for (int i=0; i < strlen(correct_password); i++){
            printf("%c", flag[i]);
        };
        printf("\n"); // newline
    } else { 
        printf("Invalid Password\n"); // invalid password
    }

    return 0;
}
