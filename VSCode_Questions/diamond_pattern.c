#include <stdio.h>

static void print_row(int n, int row) {
    for (int space = 0; space < n - row; space++) putchar(' ');
    for (int col = 0; col < 2 * row - 1; col++) putchar('*');
    putchar('\n');
}

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    for (int row = 1; row <= n; row++) print_row(n, row);
    for (int row = n - 1; row >= 1; row--) print_row(n, row);
    return 0;
}
