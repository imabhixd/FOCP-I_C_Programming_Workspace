#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    for (int row = n; row >= 1; row--) {
        for (int col = 1; col <= row; col++) putchar('*');
        putchar('\n');
    }
    return 0;
}
