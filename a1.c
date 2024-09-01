#include <stdio.h>

void coin_combination(int cents) {
    for(int pennies = 0; pennies <= cents; pennies++) {
        for(int nickels = 0; nickels <= (cents / 5); nickels++) {
            for(int dimes = 0; dimes <= (cents / 10); dimes++) {
                for(int quarters = 0; quarters <= (cents / 25); quarters++) {
                    if(pennies + (5 * nickels) + (10 * dimes) + (25 * quarters) == cents) {
                        printf("%d quarter(s), %d dime(s), %d nickel(s), %d pennie(s)\n", quarters, dimes, nickels, pennies);
                    }
                }
            }
        }
    }
}

int main() {
    int cents;
    scanf("%d", &cents);
    coin_combination(cents);
    return 0;
}
