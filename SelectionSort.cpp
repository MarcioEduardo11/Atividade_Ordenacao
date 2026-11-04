
#include <iostream>
using namespace std;

// Funcao para mostrar o vetor
void mostrarVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;
}

// Algoritmo Selection Sort
void selectionSort(int vetor[], int tamanho) {

    int comparacoes = 0;
    int trocas = 0;

    // Percorre as posicoes do vetor
    for (int i = 0; i < tamanho - 1; i++) {

        int menor = i;

        // Procura o menor elemento
        for (int j = i + 1; j < tamanho; j++) {

            comparacoes++;

            if (vetor[j] < vetor[menor]) {
                menor = j;
            }
        }

        // Troca os elementos
        if (menor != i) {
            int aux = vetor[i];
            vetor[i] = vetor[menor];
            vetor[menor] = aux;

            trocas++;
        }
    }

    cout << "\nVetor ordenado: ";
    mostrarVetor(vetor, tamanho);

    cout << "Comparacoes: " << comparacoes << endl;
    cout << "Trocas: " << trocas << endl;
}

int main() {

    int vetor[] = {5, 3, 8, 1, 2};
    int tamanho = 5;

    cout << "Vetor original: ";
    mostrarVetor(vetor, tamanho);

    selectionSort(vetor, tamanho);

    return 0;
}
