#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input_val;

    printf("Enter a value: ");
    if (scanf("%d", &input_val) != 1) { // Check if input is valid
        printf("Invalid input. Please enter an integer.\n");
        return 1; // Exit with an error code
    }

    if (input_val <= 1) {
        printf("Input value must be greater than 1 to execute the loop.\n");
    } else {
        while (input_val > 1) {
            printf("%d\n", input_val); // Print each number on a new line
            input_val--;
        }
    }

    return 0;
}

/*
#include<stdio.h>

int main()
{
    int input_val;

    printf("Enter a number:");
    scanf("%d",&input_val);

    while(input_val>0)
    {
        printf("%d\n",input_val);
        input_val--;
    }

    return 0;
}
*/
