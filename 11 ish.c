#include <stdio.h>

int main() {
    int tanlov;
    printf("1 - Avtomobil\n2 - Avtobus\n3 - Poyezd\n4 - Samolyot\n");
    printf("Raqamni kiriting: ");
    scanf("%d", &tanlov);

    switch (tanlov) {
        case 1: printf("Avtomobil\n"); break;
        case 2: printf("Avtobus\n"); break;
        case 3: printf("Poyezd\n"); break;
        case 4: printf("Samolyot\n"); break;
        default: printf("Noto'g'ri raqam!\n");
    }
    return 0;
}
