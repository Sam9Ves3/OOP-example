#include <stdio.h>
#include <conio.h>
int main(void) {
    // Define Variables
    int l1, l2, l3;

    // Display a Interface
    printf("                               *      \n");
    printf("                              ***     \n");
    printf("                             *****    \n");
    printf("                            *******   \n");
    printf("                           *********  \n");
    printf("                          *********** \n");
    printf("                 === Triangle Classification ===\n");
    printf("               Write the length of the triangle sides\n\n");
    // Petition of the input to compute
    printf("First side: ");
    scanf("%d", &l1);
    printf("\nSecond side: ");
    scanf("%d", &l2);
    printf("\nThird side: ");
    scanf("%d", &l3);
    printf("\n");
    // Compute the difference of sides and print the result
    if ((l1==l2) && (l2==l3)) {
        printf("                  _____________________________\n");
        printf("                 | The triangle is Equilateral | \n");
        printf("                 |_____________________________|\n");
    }
    else {
    if (l1==l2 || l2==l3 || l1==l3) {
        printf("                  _____________________________\n");
        printf("                 |  The triangle is Isosceles  | \n");
        printf("                 |_____________________________|\n");
    } else {
        printf("                  _____________________________\n");
        printf("                 |   The triangle is Scalene   | \n");
        printf("                 |_____________________________|\n");
        }
    }
    printf("\n\n\n\n\n\n\n");
}
