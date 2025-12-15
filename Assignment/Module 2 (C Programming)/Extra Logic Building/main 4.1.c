#include<stdio.h>
#include<conio.h>

int prime(int num) {
    if (num <= 1)
        return 0; 
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0; 
    }
    return 1; 
}
void main()
{
      int n, sum = 0;

    printf("Enter a number N: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        if (prime(i)) {
            sum += i;
        }
    }

    printf("Sum of all prime numbers up to %d is: %d\n", n, sum);

    
    getch();
}