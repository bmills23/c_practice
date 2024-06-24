// Unfinished

#include <stdio.h>
#include <math.h>

// Prototype
long getLong(char *str);

int main(void)
{
    long num = getLong("Number: ");

    // Get length of long
    int nDigits = floor(log10(abs(num))) + 1;

}

long getLong(char *str)
{
    long num;
    printf("%s", str);
    scanf("%ld", &num);

    return num;
}
