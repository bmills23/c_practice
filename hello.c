#include <stdio.h>

// Data types
int a = 5;
float b = 5.5;
char c = 'c';
double d = 5.555;
char str[] = "Hello, World!";
int arr[] = {1, 2, 3, 4, 5};
void *ptr = NULL;

// Function prototypes
int helloWorld();
int getName();

// Standard for main() to return an int
int main() 
{
    helloWorld();
    getName();
    return 0;
}

int helloWorld() 
{
    printf("Hello, World!\n");
    return 0;
}

int getName()
{
    char name[100];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Hello, %s!\n", name);
    return 0;
}

