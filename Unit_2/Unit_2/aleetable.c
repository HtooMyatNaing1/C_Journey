#include<stdio.h>
#include<stdlib.h>

int main()
{
    while(1){
        int val;
        int row;
        int result;
        row = 0;

        // This program gives the first ten rows of the product table
        printf("\nThis program gives the first ten rows of the product table\n");
        printf("Enter which product table you want (Type a number 1,2,3,4,5,6,7,8,9,etc.):");
        scanf("%d",&val);

        while(row<=12){
            result=val*row;
            printf("%d x %d = %d\n",val,row,result);
            row++;
        }
    }

    return 0;
}
