/*
Name:Simon Muthama Makenzi
Reg number:CT101/G/26522/25
Description:A 2D array for room vacancies
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int occupancy[5][10]; // 5 floors, 10 rooms per floor
   
     int occupied, vacant;

    srand(time(NULL)); // Seed random number generator

    // Fill array with random occupancy data (0 or 1)
    for (int floor = 0; floor < 5; floor++) {
        for (int room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2;
        }
    }

    // Display occupancy report per floor
    printf("Room Occupancy Report:\n\n");
    for (int floor = 0; floor < 5; floor++) {
        occupied = vacant = 0;
        for (int room = 0; room < 10; room++) {
            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }
        printf("Floor %d → Occupied: %d, Vacant: %d\n", floor + 1, occupied, vacant);
    }

    return 0;
}