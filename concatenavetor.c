#include <stdio.h>

int main() {
    int N, M;

    scanf("%d %d", &M, &N);

    int A[N], B[M], C[N + M];

    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < M; i++) {
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < N; i++) {
        C[i] = A[i];
    }
    for (int i = 0; i < M; i++) {
        C[N + i] = B[i];
    }

    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }

    for (int i = 0; i < M; i++) {
        printf("%d ", B[i]);
    }

    return 0;
}
