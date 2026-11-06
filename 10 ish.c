#include <stdio.h>

int main() {
    int son, musbat = 0, manfiy = 0;

    printf("Sonlarni kiriting (0 - to'xtatish):\n");
    scanf("%d", &son);
    while (son != 0) {
        if (son > 0)
            musbat++;
        else
            manfiy++;
        scanf("%d", &son);
    }
    printf("Musbat sonlar soni: %d\n", musbat);
    printf("Manfiy sonlar soni: %d\n", manfiy);
    return 0;
}
