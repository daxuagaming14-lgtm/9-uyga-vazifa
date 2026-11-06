#include <stdio.h>

int main() {
    int parol = 12345;
    int kiritilgan = 0;

    while (kiritilgan != parol) {
        printf("Parolni kiriting: ");
        scanf("%d", &kiritilgan);
        if (kiritilgan != parol) {
            printf("Noto'g'ri parol! Qayta urinib ko'ring.\n");
        }
    }
    printf("Parol to'g'ri! Xush kelibsiz.\n");
    return 0;
}
