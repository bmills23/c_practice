#include <stdio.h>
#include "functions.h"

int main(void)
{
    int num;

    do 
    {
        num = getInt("Size: ");

    }
    while (num < 1);

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}