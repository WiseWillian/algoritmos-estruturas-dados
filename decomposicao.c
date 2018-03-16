#include<stdio.h>
#include<stdlib.h>

void decompoeNumero(int *vetor, int *tamanho);
void escreveVetor(int *vetor, int *tamanho);

int main()
{
    int fatores[100];
    int inicial, tamanho;

    printf("Digite um numero inteiro: ");
    scanf("%i", &fatores[0]);

    inicial = fatores[0];
    printf("Decomposicao:\n");

    for(tamanho = 0; tamanho < inicial; tamanho++)
    {
        decompoeNumero(fatores, &tamanho);
        escreveVetor(fatores, &tamanho);
    }
    return 0;
}

void decompoeNumero(int *vetor, int *tamanho)
{

}

void escreveVetor(int *vetor, int *tamanho)
{

}
