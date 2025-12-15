#include <stdio.h>
#include <conio.h>

void main() {
     int num, original, rem, sum;

    printf("Armstrong numbers between 1 and 1000 are:\n");

    for (num = 1; num <= 1000; num++) {
        original = num;
        sum = 0;

        while (original != 0) {
            rem = original % 10;
            sum += rem * rem * rem;  
            original /= 10;
        }

        if (sum == num) {
            printf("%d\n", num);
        }
    }
    getch();
}
