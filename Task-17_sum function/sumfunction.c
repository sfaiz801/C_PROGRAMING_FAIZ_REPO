#include <stdio.h>

int main() 
{
    int number [5];
    printf("Please enter any 5 numbers: ");
    for(int i = 0; i < 5; i++)
    
     {
        scanf("%d", &number[i]);
    }

    printf("The numbers entered are: ");
    for(int i = 0; i < 5; i++)

     {
        printf("%d ", number[i]);

    }
      int sum=0;
    for(int i=0; i<5; i++)
    {
        sum=sum+number[i];
    }

    printf("\nThe sum of the numbers is: %d\n", sum);

    return 0;
}