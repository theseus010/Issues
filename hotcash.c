#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int total_cents;
    do
    {
        total_cents = get_int("Change owed in cents: ");
    }
    while (total_cents < 0);

    int quarters = total_cents / 25;
    int dimes = ((total_cents % 25) / 10);
    int nickles = (((total_cents % 25) % 10) / 5);
    int pennies = ((((total_cents % 25) % 10) % 5) / 1);

    int total_coins_owed = quarters + dimes + nickles + pennies;
    printf("Quarters:%i Dimes:%i Nickles:%i Pennies:%i Total Coins:%i\n", quarters, dimes, nickles, pennies, total_coins_owed);

}
