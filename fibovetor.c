#include <stdio.h>

unsigned long long fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    unsigned long long a = 0, b = 1, fib;

    for (int i = 2; i <= n; i++) {
        fib = a + b;
        a = b;
        b = fib;
    }

    return fib;
}

int main() {
    int T;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int N;

        scanf("%d", &N);

        unsigned long long fibValue = fibonacci(N);
        printf("Fib(%d) = %llu\n", N, fibValue);
    }

    return 0;
}
