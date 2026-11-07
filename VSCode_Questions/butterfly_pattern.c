#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int half = (n + 1) / 2;
    for (int row = 1; row <= half; row++) {
        for (int col = 0; col < row; col++) putchar('*');
        for (int space = 0; space < 2 * (half - row); space++) putchar(' ');
        for (int col = 0; col < row; col++) putchar('*');
        putchar('\n');
    }
    for (int row = half - 1; row >= 1; row--) {
        for (int col = 0; col < row; col++) putchar('*');
        for (int space = 0; space < 2 * (half - row); space++) putchar(' ');
        for (int col = 0; col < row; col++) putchar('*');
        putchar('\n');
    }
    return 0;
}
