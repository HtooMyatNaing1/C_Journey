#include<stdio.h>

int multiply(int a, int b);
int divi(int a, int b);

int main()
{
    int num1=0;
    int num2=0;

    printf("\nEnter the first number:");
    scanf("%d",&num1);
    printf("\n\nEnter the second number:");
    scanf("%d",&num2);
    printf("Product: %d\n",multiply(num1, num2));
    printf("Division: %d",divi(num1, num2));

    return 0;
}

int multiply(int a, int b)
{
    return a*b;
}

int divi(int a, int b)
{
    return a/b;
}


/* #include<stdio.h>

int multiply(int a);

int main()
{
    int number=0;
    int result=0;

    printf("\nThe following program will return the square of your input value.\n\n");

    printf("Enter a number:");
    scanf("%d",&number);

    result = multiply(number);
    printf("\nThe square of %d is %d",number,result);

    return 0;
}

int multiply(int a)
{
    return a*a; // This function returns the square of the input
}


#include<stdio.h>

void print(); // Declaring a function (prototype)
void name();

int main()
{
    // Functions: 1. Standard Library Functions
    //            2. Programmer Defined Functions
    printf("Hello world!");
    print();
    name();

    return 0;
}

void print()
{
    printf("World");
}

void name()
{
    printf("Hacker Mg Htoo");
}
*/
