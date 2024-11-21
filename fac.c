#include <stdio.h>

int main() 
{
    int num = 10, factorial = 1;
    
    if (num < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    } 
    else
    {
        for (int i = 1; i <= num; ++i) 
        {
            factorial *= i;
        }
        printf("Factorial of %d is %d\n", num, factorial);
    }
    return 0;
}
