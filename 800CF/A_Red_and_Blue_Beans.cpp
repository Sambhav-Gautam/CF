#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long int red, blue, diff;
        scanf("%lld %lld %lld", &red, &blue, &diff);
        if (red > blue * (1 + diff) || blue > red * (1 + diff)) {
            printf("NO\n");
        } else {
            printf("YES\n");
        }
    }
    return 0;
}
