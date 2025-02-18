#include <stdio.h>
#include <math.h>
int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}
void printPrimes() {
    int lp, up, i, found = 0;
    
    printf("Enter the lowerlimit");
    scanf("%d", &lp);
    printf("Enter the upperlimit");
    scanf("%d", &up);

    if (lp > up) {
        printf("Invalid range!.\n");
        return;
    }
    printf("Prime numbers between %d and %d are", lp, up);
    for (i = lp; i <= up; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
            found = 1;
        }
    }
    if (!found) {
        printf("None");
    }
    printf("\n");
}
void printPattern() {
    int i, j, n;
    char ch;
    printf("Enter the limit");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        ch = 'a';
        for (j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
}
void calculateSeries() {
    double x, sum = 0, term;
    int terms, i, fact;
    printf("Enter the value of x");
    scanf("%lf", &x);
    printf("Enter the number of terms");
    scanf("%d", &terms);
    for (i = 1; i <= terms; i++) {
        fact = 1;
        for (int j = 1; j <= i; j++) {
            fact *= j;
        }
        term = pow(x, i) / fact;
        if (i % 2 == 0) {
            sum -= term;
        } else {
            sum += term;
        }
    }
    printf("Sum of the serie %.6f\n", sum);
}
int main() {
    int choice;
    do {
        printf("1. Print prime numbers in a range\n");
        printf("2. Print character pattern\n");
        printf("3. Calculate sum of series\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printPrimes();
                break;
            case 2:
                printPattern();
                break;
            case 3:
                calculateSeries();
                break;
            case 4:
                printf("Exit the program.\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 4);

    return 0;
}
