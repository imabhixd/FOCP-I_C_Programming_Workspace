#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= row; col++)
            putchar(col == 1 || col == row || row == n ? '*' : ' ');
        putchar('\n');
    }
    return 0;
}
