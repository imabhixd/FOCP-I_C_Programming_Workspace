#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= row; col++) printf("%s%d", col == 1 ? "" : " ", col);
        putchar('\n');
    }
    return 0;
}
