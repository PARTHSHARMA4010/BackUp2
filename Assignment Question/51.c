#include <stdio.h>
int check(int hours) {

    if (hours > 40) {
        int pay = (hours - 40)*12;
        return pay;
    } else {
        return 0;
    }
}

int main() {
    int num = 10;

    for (int i = 1; i <= num; i++) {
        int hours;
        printf("Enter hours worked for employee %d: ", i);
        scanf("%d", &hours);

        int pay = check(hours);
        printf("Overtime pay for employee %d: Rs. %d\n", i, pay);
    }

    return 0;
}
