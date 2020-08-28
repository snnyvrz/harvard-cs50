#include <cs50.h>
#include <math.h>
#include <stdio.h>

float prompt(void);

int main(void) {
    float dollars = prompt();
    int cents = round(dollars * 100);
    int quarters = cents / 25;
    cents %= 25;
    int dimes = cents / 10;
    cents %= 10;
    int nickles = cents / 5;
    cents %= 5;
    int coins_count = quarters + dimes + nickles + cents;
    printf("%i\n", coins_count);
}

float prompt(void) {
    string instructions = "Please enter the amount of change\nLike this: 9.75\n";
    printf("%s", instructions);

    float dollars;
    do {
        dollars = get_float("\ngo on: ");
    } while(dollars < 0);
    return dollars;
}
