#include <stdio.h>

void coin_combination(int cents) {
    for(int quarters = (cents / 25); quarters >= 0; quarters--) {
        for(int dimes = (cents - (quarters * 25)) / 10; dimes >= 0; dimes--) {
            for(int nickels = (cents - (quarters * 25) - (dimes * 10)) / 5; nickels >= 0; nickels--) {
                int pennies = cents - (quarters * 25) - (dimes * 10) - (nickels * 5);
                printf("%d quarter(s), %d dime(s), %d nickel(s), %d pennie(s)\n", quarters, dimes, nickels, pennies);
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
