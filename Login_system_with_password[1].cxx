/*
Name:Simon Muthama Makenzi
Reg number:CT101/G/26522/25
Description:A login system with password 
*/
#include <stdio.h>
#include <string.h>

int main() {
    char password[10];
    int attempts = 0;

    do {
        printf("Enter password:\n ");
        scanf("%9s", password);  // Prevent buffer overflow
     
           attempts++;
    } while (strcmp(password, "1234") != 0);

    printf("Access Granted\n");
    printf("Number of attempts: %d\n", attempts);

    return 0;
}