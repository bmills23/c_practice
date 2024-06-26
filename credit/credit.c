// Test credit cards

// AMEX 15 digits, 34 or 37
// MasterCard 16 digits, 51, 52, 53, 54, 55
// Visa, 13 or 16, 4

#include <stdio.h>

// Prototype
long get_long();

int main()
{
    long n = get_long("Number: ");

    // Reference for starting number
    long num = n;

    // Track initial product for even digits
    int prod1 = 0;


    /*
        Track secondary product for odd digits;
        Because of the way the digits are tracked,
        add the last digit to the second product
    */
    int prod2 = n%10;

    // Final product
    int final = 0;

    // For correct Luhn Validation (prod1 + prod2) % 10 = 0 is a pass

    // Variable to track Length of n
    int length = 0;

    // Variables to track leading digits
    int l1 = 0; // 1st digit
    int l2 = 0; // 2nd digit

    while (n > 0)
    {
        // 34 % 10 = 4 for example
        // printf("%ld\n", n%10);

        // 34 / 10 = 3 for example
        n = n/10;

        // Leading digits
        if (n > 0 && n < 9)
        {
            l1 = n;
        }

        if (n > 10 && n < 99) {
            l2 = n;
        }

        // Multiply every other digit by 2 and add
        // Must use odd lengths because we're incrementing from 0
        if (length % 2 == 0)
        {
            // Split digits if n%10*2 is >= 10, will never be > 2 digits long
            if ((n%10)*2 >= 10)
            {
                // Add end digit
                prod1+=(((n%10)*2)/10);
                // Add leading digit
                prod1+=(((n%10)*2)%10);
            } else {
                prod1+=(n%10)*2;
            }

        } else {
            prod2+=(n%10);
            printf("%d\n", prod2);
        }

        length++;
    }

    printf("Length is %d\n", length);

    if (length < 13 || length > 16)
    {
        printf("INVALID LENGTH\n");
        return 0;
    }

    printf("Prod 1 = %d\nProd 2 = %d\n", prod1, prod2);

    final = prod1 + prod2;

    if (final % 10 != 0) {
        printf("INVALID AUTH\n");
        return 0;
    }

    // If we've made it this far, we can finally check the card type
    if ((length == 13 && l1 == 4) || (length == 16 && l1 == 4))
    {
        printf("VISA\n");
    }

    if ((length == 16 && (l2 == 51 || l2 == 52 || l2 == 53 || l2 == 54 || l2 == 55)))
    {
        printf("MASTERCARD\n");
    }

    if ((length == 15 && (l2 == 34 || l2 == 37)))
    {
        printf("AMEX\n");
    }

    printf("Your card is %ld\n", num);

    printf("Primary product of digits is %d\n", prod1);

    printf("Secondary product of digits is %d\n", prod2);

    printf("Your leading digits are %d and %d\n", l1, l2);

    return 0;
}

long get_long(char *str)
{
    long num;
    printf("%s", str);
    scanf("%ld", &num);

    return num;
}

