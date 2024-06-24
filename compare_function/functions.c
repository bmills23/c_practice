#include <stdio.h>
#include "functions.h"

int getStr()
{
    char str[20];
    printf("Enter your name: ");
    scanf("%19[^\n]s", str);
    printf("Hello, %s!\n", str);
    
    return 0;
}

int getInt(char *str)
{
    int num;
    printf("%s", str);
    scanf("%d", &num);
    printf("You entered: %d\n", num);
    
    return num;
}
