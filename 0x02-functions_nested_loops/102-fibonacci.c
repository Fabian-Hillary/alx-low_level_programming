#include <stdio.h>
void print_50_Fibonacci_numbers() 
{
    long int first = 1, second = 2, next, i;

    printf("%ld, %ld", first, second);
    for (i = 2; i < 50; i++) 
    {
    next = first + second;
    printf(", %ld", next);
    first = second;
    second = next;
    }
    printf("\n");
}
int main() 
{
    print_50_Fibonacci_numbers();
    return 0;
}
