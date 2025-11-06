/*
Name:Simon Muthama Makenzi
Reg no:CT101/G/26522/25
Description:A c program that is used by a libralian to store book titles
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char title[100];

    // Open the file in append mode
    file = fopen("C:\\Users\\Admin\\Documents\\Projects\\borrowed_books.txt", "a");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter the title of the book borrowed:\n ");
    fgets(title, sizeof(title), stdin);

    // Write the title to the file
    fprintf(file, "%s", title);
    fclose(file);

    printf("Book title successfully stored in borrowed_books.txt\n");
    return 0;
}