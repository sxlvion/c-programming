#include <stdio.h>
int isPrime(int num) {
    int i;
    if (num <= 1) {
        return 0;
    }
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int k, lp, up, i;
    while(1) {
        printf("Enter 1 to enter the program\n");
        printf("Enter any other number to exit\n");
        scanf("%d", &k);
        if(k == 1) {
            printf("Enter the lower limit: ");
            scanf("%d", &lp);
            printf("Enter the upper limit: ");
            scanf("%d", &up);
            printf("Prime numbers between %d and %d are: ", lp, up);

            for (i = lp; i <= up; i++) {
                if (isPrime(i)) {
                    printf("%d ", i);
                }
            }
            printf("\n");
        } else {
            printf("Exiting the program.\n");
            break;
        }
    }

    return 0;
}
