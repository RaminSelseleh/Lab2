#include <stdio.h>
#include <math.h>

// using the sigmoid formula for the second column
float sigmoid (float x) {
    float sig;
    sig = (1/(1+exp(-x)));
    return sig;
}

// using for loop to starts at -5 and go to 5, going up by 1.
int main() {
    float x;
    for (x = -5.0; x <= 5.0; x+=1.0)

    // printing the results
    printf("%.3f %.3f\n", x, sigmoid(x));
}
