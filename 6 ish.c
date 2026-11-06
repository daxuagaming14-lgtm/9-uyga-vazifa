#include <stdio.h>

int main() {
    int narx = 5000;
    int dona = 1;
    while (dona <= 10) {
        printf("%d dona daftar: %d so'm\n", dona, dona * narx);
        dona++;
    }
    return 0;
}
