#include <stdio.h>
#include <stdbool.h>

int main() {
    int N;

    scanf("%d", &N);

    int ciclo[2 * N];
    bool atingido[N + 1];

    for (int i = 1; i <= N; i++) {
        atingido[i] = false;
    }

    for (int i = 0; i < 2 * N; i++) {
        scanf("%d", &ciclo[i]);
    }

    int countAtingidos = 0;
    int posicao = 0;

    for (int i = 0; i < 2 * N; i++) {
        int ponto = ciclo[i];

        if (ponto >= 1 && ponto <= N && !atingido[ponto]) {
            atingido[ponto] = true;
            countAtingidos++;

            if (countAtingidos == N) {
                posicao = i + 1;
                break;
            }
        }
    }

    if (countAtingidos == N) {
        printf("%d\n", posicao);
    } else {
        printf("0\n");
    }

    return 0;
}
