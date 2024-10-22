#include <stdio.h>

int main(){
    int N;

    scanf("%d", &N);

    float notas[N];
    float maior, menor, soma = 0, media;

    for(int i = 0; i < N; i++){
        scanf("%f", &notas[i]);
    }

    maior = menor = notas[0];

    for(int i = 0; i < N; i++){
        if (notas[i] > maior){
            maior = notas[i];
        }

        if (notas[i] < menor){
            menor = notas[i];
        }
        soma += notas[i];
    }

    media = soma / N;

    printf("%.1f %.1f %.1f", maior, menor, media);

    return 0;

}
