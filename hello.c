#include <stdio.h>

// Data types
int a = 5;
float b = 5.5;
char c = 'c';
double d = 5.555;
char str[] = "Hello, World!";
int arr[] = {1, 2, 3, 4, 5};

/* 
    Pointers are variables that store the memory address of another variable and are useful because they 
    allow you to work with the address of a variable rather than the variable itself.
    This is good because it allows you to manipulate the data stored in the memory address of a variable.
    Example: 
    int x = 5;
    int *ptr = &x;
    printf("%d", *ptr); // Output: 5
    printf("%p", ptr); // Output: 0x7fffbf7f3bfc
*/      

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

