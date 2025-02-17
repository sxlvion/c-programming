#include <stdio.h>
int main() {
    int i, j, n, k;
    while(1) {
        printf("Enter 1 to enter the program\n");
        printf("Enter any other  to exit");
        scanf("%d", &k);

        if(k == 1) {
            printf("Enter number of rows: ");
            scanf("%d", &n);

            char ch;
            for(i = 1; i <= n; i++) {
                ch = 'a';
                for(j = 1; j <= i; j++) {
                    printf("%c ", ch);
                    ch++;
                }
                printf("\n");
            }
        } else {
            printf("Exiting the program");
            break;
        }
    }
    return 0;
}
