#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array;  // declare pointer to integer
    int n, i;

    // prompt user for array size
    printf("Zadejte velikost pole: ");
    scanf("%d", &n);

    // dynamically allocate memory for array
    array = (int *) malloc(n * sizeof(int));

    // check if allocation was successful
    if (array == NULL) {
        printf("Error: Nelze alokovat pamet.\n");
        return 1;
    }

    // prompt user to enter values for array
    printf("Zadejte %d hodnot do pole:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // print out the values in the array
    printf("Hodnoty pole jsou:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    // free dynamically allocated memory
    free(array);

    return 0;
}
