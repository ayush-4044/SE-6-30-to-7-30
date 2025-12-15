#include <stdio.h>
#include<conio.h>

int fib_recursive(int n) {
    if (n <= 1)
        return n;
    return fib_recursive(n - 1) + fib_recursive(n - 2);
}

int fib_iterative(int n) {
    int a = 0, b = 1, next, i;

    if (n == 0)
        return 0;

    for (i = 2; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }
    return b;
}

void main() {
    int n;

    printf("Enter the value of N : ");
    scanf("%d", &n);

    printf("\nRecursive result: %d\n", fib_recursive(n));
    printf("Iterative result: %d\n", fib_iterative(n));

    getch();
}
