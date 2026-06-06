#include <stdio.h>

int main(){
    double x, y;
    printf("Enter a value for X: ");

    if (scanf("%lf", &x) != 1) {
        printf("Invalid input for X. Please enter a number.\n");
        return 1; 
    }

    printf("Enter a value for Y: ");

    if (scanf("%lf", &y) != 1) {
        printf("Invalid input for Y. Please enter a number.\n");
        return 1; 
    }
  
    printf("X: %.2lf, Y: %.2lf\n", x, y);

    for (int row = 20; row >= 0; row--) {

    printf("%2d | ", row);

    for (int col = 0; col <= 20; col++) {

        if (col == (int)x && row == (int)y)
            printf("X ");
        else
            printf(". ");
        }
    printf("\n");
    }
    return 0;
}
