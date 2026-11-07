#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) putchar((row + col) % 2 == 0 ? 'X' : 'O');
        putchar('\n');
    }
    return 0;
}
