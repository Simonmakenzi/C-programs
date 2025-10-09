/*
Name : Simon Muthama Makenzi
Reg number:CT101/G/26522/25
Description: Bank withdrawal process
*/
#include <stdio.h>

int main() {
    float balance;
// prompt user to enter balance
    printf("Enter initial account balance:\n ");
    scanf("%f", &balance);

    while (balance > 0) {
        float withdrawal;
        
        printf("Enter amount to withdraw:\n ");
        scanf("%f", &withdrawal);

        balance -= withdrawal;
        printf("Remaining balance: %.2f\n", balance);
    }

    printf("Transaction ended. Insufficient funds.\n");
    return 0;
}