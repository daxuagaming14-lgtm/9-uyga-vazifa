#include <stdio.h>

int main() {
    // Kurslar (1 birlik valyuta = necha so'm)
    const double USD = 12700.0;
    const double EUR = 13800.0;
    const double RUB = 140.0;

    int tanlov;
    double som;

    printf("1 - Dollar (USD)\n2 - Yevro (EUR)\n3 - Rubl (RUB)\n");
    printf("Variantni tanlang: ");
    scanf("%d", &tanlov);
    printf("So'm miqdorini kiriting: ");
    scanf("%lf", &som);

    switch (tanlov) {
        case 1: printf("%.2f so'm = %.2f USD\n", som, som / USD); break;
        case 2: printf("%.2f so'm = %.2f EUR\n", som, som / EUR); break;
        case 3: printf("%.2f so'm = %.2f RUB\n", som, som / RUB); break;
        default: printf("Noto'g'ri variant!\n");
    }
    return 0;
}
