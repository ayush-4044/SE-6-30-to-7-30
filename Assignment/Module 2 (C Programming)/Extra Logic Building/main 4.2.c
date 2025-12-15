#include <stdio.h>
#include <conio.h>

int prime(int num) {
    if (num <= 1)
        return 0; 
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0; 
    }
    return 1; // Prime
}

void main() {
    int n, sum = 0;

    printf("Enter a number n: ");
    scanf("%d", &n);

    printf("Prime numbers up to %d are:\n", n);

    for (int i = 2; i <= n; i++) {
        if (prime(i)) {
            printf("%d ", i);  
            sum += i;         
        }
    }

    printf("\nSum of all prime numbers up to %d is: %d\n", n, sum);

    getch();
}
