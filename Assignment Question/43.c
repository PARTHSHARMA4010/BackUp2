#include <stdio.h>

int main() {
    float time;

    printf("Enter the time taken by the worker \n");
    scanf("%f", &time);

    if (time >= 2 && time < 3) 
        printf("Worker is highly efficient.\n");
 else if (time >= 3 && time < 4) 
        printf("Worker is ordered to improve speed.\n");
    else if (time >= 4 && time < 5) 
        printf("Worker is given training to improve speed.\n");
     else if (time >= 5) 
        printf("Worker has to leave the company.\n");
    return 0;
}
