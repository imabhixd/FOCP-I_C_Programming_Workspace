#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    for (int row = 1; row <= n; row++) {
        for (int space = 0; space < n - row; space++) putchar(' ');
        for (int col = 0; col < row; col++) putchar('*');
        putchar('\n');
    }
    return 0;
}
