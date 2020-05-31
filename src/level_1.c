#include <stdlib.h>
#include <stdio.h>
#include <string.h>


// main function
int main(void) {
    // variables
    char flag[] = "RevEng{Flag_1_easy_peasy}"; // flag variable
    char password[100]; // password variable
    
    printf("Please Enter the password to get the challenge flag!\n");
    printf("Password: ");
    fgets(password, 100, stdin); // reading from standard input
    
    if (strcmp("Password100", password) == 0) {
        printf("Flag: %s\n", flag);
    } else {
        printf("Invalid Password. Please try again\n");
    }

    return 0;
}
