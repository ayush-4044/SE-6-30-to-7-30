#include <stdio.h>
#include <conio.h>

int Triangle(int n, int r) {
    if (r == 0 || r == n)
        return 1; 
    return Triangle(n - 1, r - 1) + Triangle(n - 1, r);
}
void main() {
    int n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
   
        for (j = 0; j < n - i - 1; j++) {
            printf(" ");
        }

        for (j = 0; j <= i; j++) {
            printf("%d ", Triangle(i, j));
        }
        printf("\n");
    }
    getch();
}
