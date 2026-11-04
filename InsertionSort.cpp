
#include <iostream>
using namespace std;

// Funcao para mostrar o vetor
void mostrarVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;
}

// Algoritmo Insertion Sort
void insertionSort(int vetor[], int tamanho) {

    int comparacoes = 0;
    int trocas = 0;

    // Percorre o vetor a partir do segundo elemento
    for (int i = 1; i < tamanho; i++) {

        int chave = vetor[i];
        int j = i - 1;

        // Procura a posicao correta do elemento
        while (j >= 0) {

            comparacoes++;

            if (vetor[j] > chave) {

                vetor[j + 1] = vetor[j];
                j--;

                trocas++;

            } else {
                break;
            }
        }

        vetor[j + 1] = chave;
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

    insertionSort(vetor, tamanho);

    return 0;
}
