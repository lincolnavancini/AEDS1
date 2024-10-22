#include <stdio.h>

int main(){
    int vetor1[3], vetor2[5];
    preencherVetor(vetor1, 3);
    imprimirVetor(vetor1, 3);
    preencherVetor(vetor2, 6);
    preencherVetor(vetor2, 6);
    int tamMenor;




    int *intercalar(int vetor1[], int vetor2[], int tam1, int tam2){
        int *vetor3 = (int*)malloc((tam1+tam2)*sizeof(int));
        int j=0;
        tamMenor = tam1<tam2?tam1:tam2;
        for(int i; i<tam1; i++){
            vetor3[j] = vetor1[i];
            j++;
            vetor3[j] = vetor2[i];
            j++;
        }
    }

    void preencherVetor(int vetor[],int n){
        for(int i=0; i<n; i++){
        *(vetor+1)=rand()%100+1;
        }
    }


    void imprimirVetor(int vetor[], int n){
        for(int i=0; i<n; i++){
        printf("%d", vetor[i]);
        }
    }
}
