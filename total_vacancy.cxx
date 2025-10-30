/*
Name: Simon Muthama Makenzi
Reg number:CT101/G/26522/25
Description: A 3D array to calculate the total vacancy in an hotel
/*
Name: Simon Muthama  Makenzj
Reg number: CT101/G/26522/25
Description:A 3D array program for total vacancies in an hotel
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Declare a 3D array for 3 branches, 5 floors, 10 rooms
    int chain[3][5][10];
    int totalOccupied = 0;

    srand(time(NULL)); // Seed random number generator

    // Populate rooms with random occupancy (0 = vacant, 1 = occupied)
    for (int branch = 0; branch < 3; branch++) {
        for (int floor = 0; floor < 5; floor++) {
            for (int room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2;
                totalOccupied += chain[branch][floor][room];
            }
        }
    }

    // Display total occupancy
    printf("Total occupied rooms across all branches: %d\n", totalOccupied);

    return 0;
}