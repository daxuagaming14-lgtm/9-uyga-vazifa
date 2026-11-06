#include <stdio.h>

int main() {
    int n;
    printf("Ikki xonali son kiriting: ");
    scanf("%d", &n);

    printf("Teskari tartibda: ");
    int count = 0;
    while (count < 2) {
        printf("%d", n % 10);
        n /= 10;
        count++;
    }
    printf("\n");
    return 0;
}
