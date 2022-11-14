// Variadict Functions

// This program will demonstrate the working of the varadict AddNumbers()

#include <stdarg.h>
#include <stdio.h>

// Variadict function to add numbers
int AddNumbers(int n, ...)
{
    int Sum = 0;

    // Declaring pointer to the Argument List
    va_list ptr;

    // Initializing argument to the list pointer
    va_start(ptr, n);

    for (int i = 0; i < n; i++)
        // Accessing current variable
        // an pointing to the next one
        Sum += va_arg(ptr, int);
    
    // Ending arguement list traversal
    va_end(ptr);

    return Sum;
}

// Driver Code
int main()
{
    printf("\n\n Variadict Functions: \n");

    //Variable number of arguements
    printf("\n 1 + 2 = %d", AddNumbers (2, 1, 2));

    printf("\n 3 + 4 + 5 = %d", AddNumbers(3,4,5));

    printf("\n 6 + 7 + 8 + 9 = %d", AddNumbers(4, 6, 7, 8, 9));

    printf("\n");

}