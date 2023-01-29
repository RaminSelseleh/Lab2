#include <stdio.h>


// The variable for the number that is inputted
long int value;

// function to ask and get the number. Also checks for if a negative number is enetered. 
long int getStart() {

    for(;;) {
        printf("Enter the starting number: ");
        scanf("%ld", &value);
    
    if (value <= 0) {
        printf("The number should be a posotive integer.\n");
    }
    else {
        break;
    }
    }
    return value;
    
}

// second function. Collatz formula. 
long int nextCollatz(value) {
        if (value%2 == 0) {
            value = value / 2;
        }
        else {
            value = value * 3 + 1;

        }
    return value;
}

// main function. Printing the results.
int main () {

    // calling getStart and assigning starting length. 
    value = getStart();
    long int length = 1;

    // loops around nextCollatz until it reaches 1.
    printf("\nCollatz sequence is: ");
    while (value != 1) {
        printf(" %ld ,", value);
        value = nextCollatz(value);
        length++;

    }
    // printing the 1 at the end, and then length. 
    printf(" %ld", value);
    printf("\nlength: %ld\n", length); 
}
