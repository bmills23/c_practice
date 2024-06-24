#include <stdio.h>
#include <string.h>
#define MAX_LIMIT 20

// Output will look something like this for height 3
/*
  #  #
 ##  ##
###  ###
*/

// Include prototype
int getInt(char *str);

int main()
{
    int h;
    char str[8];
    do
    {
        h = getInt("Height: ");
    }
    while (h < 0 && h <= 8);

    // Declare amount of spaces and hashes to be printed
    int spaces = h - 1;
    int hashes = 0;

    for (int i = 0; i < h; i++)
    {
        hashes++;

        // Print spaces based on height
        for (int j = 0; j < spaces; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < hashes; j++)
        {
            printf("#");
        }

        // Print gap
        printf("  ");

        for (int j = 0; j < hashes; j++)
        {
            printf("#");
        }

        spaces--;
        printf("\n");

    }
    return 0;
}

int getInt(char *str)
{
    int num;
    printf("%s", str);
    scanf("%d", &num);

    return num;
}

