#include <stdio.h>
#include "functions.h"

int main()
{
    int x = getInt("What's x? ");
    int y = getInt("What's y? ");

    if (x < y)
    {
        printf("x is less than y\n");
    }
    else if (x > y)
    {
        printf("x is greater than y\n");
    }
    else
    {
        printf("x is equal to y\n");
    }
    return 0;
}