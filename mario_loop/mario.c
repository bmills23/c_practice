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
    while (h < 0 || h >= 8);

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < h; j++)
        {
            for (int k = 0; k < h; k++)
            {
                strcpy(str. ' ');
            }
            int spaces = h--;
            printf("#");
        }
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

