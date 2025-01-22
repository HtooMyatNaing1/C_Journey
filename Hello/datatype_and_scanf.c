#include<stdio.h>

int main(){
    int length;
    int width;
    int height;
    int volume;

    printf("\nThe following program calculates the volume of a cube.\n");

    printf("\nEnter length:");
    scanf("%d",&length);
    printf("\nEnter width:");
    scanf("%d",&width);
    printf("\nEnter height:");
    scanf("%d",&height);

    volume=length*width*height;

    printf("\nThe volume of the cube is %d",volume);

    return 0;
}
