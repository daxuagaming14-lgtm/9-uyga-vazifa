#include <stdio.h>

int main() {
    long long jami = 0, pul;

    while (jami < 100000) {
        printf("Jamg'argan pulingizni kiriting (so'm): ");
        scanf("%lld", &pul);
        jami += pul;
        printf("Hozirgi jami: %lld so'm\n", jami);
    }
    printf("Maqsadga yetdingiz! Jami yig'ilgan pul: %lld so'm\n", jami);
    return 0;
}
