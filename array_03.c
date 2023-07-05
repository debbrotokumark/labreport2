#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int dice[] = {1, 2, 3, 4, 5, 6};
    int index;

    // Seed the random number generator
    srand(time(NULL));

    // Generate a random index
    index = rand() % 6;

    // Print the result
    printf("The dice rolled: %d\n", dice[index]);

    return 0;
}
