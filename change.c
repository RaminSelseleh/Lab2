#include <stdio.h>


int bills(int num) {
    int total;
    int remain;
    
    int bill100 = num / 100;
        remain = num % 100;
    
    int bill20 = remain / 20;
        remain %= 20;
    
    int bill10 = remain / 10;
        remain %= 10;
    
    int bill5 = remain / 5;
        remain %= 5;
    
    int bill1 = remain / 1;
        remain %= 1;
    

    total = bill100 + bill20 + bill10 + bill5 + bill1;
    return total;
}

int getAmount() {
    int result;

    for (;;) {
        printf("Enter a dollar amount: ");
        scanf("%d", &result);

    if (result <= 0) {
        printf("Please enter a psotive number.\n");
    } 
    else {
        break;
    }
    }

    return result;
}

int main() {
    int val = bills(getAmount());
    printf("You get %d bills back\n", val);
}
