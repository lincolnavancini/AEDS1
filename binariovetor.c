#include <stdio.h>
#include <math.h>

int main() {
    int N;

    scanf("%d", &N);

    int bits[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &bits[i]);
    }

    int decimal = 0;
    for (int i = 0; i < N; i++) {
        decimal += bits[N - 1 - i] * pow(2, i);
    }

    printf("%d\n", decimal);

    return 0;
}
