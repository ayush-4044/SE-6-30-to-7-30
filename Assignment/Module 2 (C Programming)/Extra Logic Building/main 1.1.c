#include <stdio.h>
#include <conio.h>

void main() {
    int num, originalNum, rem, result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num != 0) {
        rem = num % 10;
        result += rem * rem * rem;
        num /= 10;
    }

    if (result == originalNum)
        printf("%d is an Armstrong number.\n", originalNum);
    else
        printf("%d is not an Armstrong number.\n", originalNum);

    getch();
}
