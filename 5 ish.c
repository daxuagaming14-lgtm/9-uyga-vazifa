#include <stdio.h>

int main() {
    int i = 10, sum = 0;
    while (i <= 30) {
        sum += i;
        i++;
    }
    printf("10 dan 30 gacha sonlar yig'indisi: %d\n", sum);
    return 0;
}
