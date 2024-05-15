#include <cs50.h>
#include <stdio.h>



int x;
int y;
int a;
int i;
int b;
int j;
int c;
int k;
int d;
int main(void)

{


    // Prompt the user for change owed, in cents
while (1)
{
    do
    {
        x = get_int("Change owed in cents: ");
    }
    while (x < 0);

    // Calculate how many quarters you should give customer




    if (x >= 5)
    {
        a = x / 5;

    // Subtract the value of those quarters from cents

        i = x - 5 * a;
    }
    else
    {
        i = x;
    }

    // Calculate how many dimes you should give customer

    if (a >= 5)
    {
        b = a / 5;

    // Subtract the value of those dimes from remaining cents

        j = a - 5 * b;
    }

    // Calculate how many nickels you should give customer

    if ( (x < 5 && x >= 2) || ( j >= 2 && a >= 2) )

    {
        c = j / 2;

    // Subtract the value of those nickels from remaining cents

        k = j - 2 * c;
    }

    if ( a == 1 )
    {
        printf("%i\n", a + i);
    }
    else
    {y = i + b + c + k;
    // Print that sum
    {
        printf("%i\n", y);
    }
    }
    }
    


