#include <stdio.h>

int main() {
    float hard, carbon, tensile;
    printf("Enter hardness: ");
    scanf("%f", &hard);
    printf("Enter carbon content: ");
    scanf("%f", &carbon);
    printf("Enter tensile strength: ");
    scanf("%f", &tensile);

    int grade ;

    if (hard > 50) {
        if (carbon < 0.7) {
            if (tensile > 5600) 
                grade = 10;
             else 
                grade = 9;
            
        } else if (tensile > 5600) 
            grade = 7;
         else 
            grade = 6;
    } 
    else if (carbon < 0.7) {
        if (tensile > 5600) {
            grade = 9;
        } else {
            grade = 6;
        }
    } else if (tensile > 5600) {
        grade = 6;
    }
    else
     grade = 5;

    printf("Grade of the steel: %d\n", grade);

    return 0;
}
