
#include <iostream>
using namespace std;

// Funcao para mostrar os valores do vetor
void mostrarVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;
}

// Algoritmo Bubble Sort
void bubbleSort(int vetor[], int tamanho) {

    int comparacoes = 0;
    int trocas = 0;

    // Percorre o vetor varias vezes
    for (int i = 0; i < tamanho - 1; i++) {

        // Compara os elementos vizinhos
        for (int j = 0; j < tamanho - 1 - i; j++) {

            comparacoes++;

            // Verifica se estao fora de ordem
            if (vetor[j] > vetor[j + 1]) {

                // Troca os valores de posicao
                int aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;

                trocas++;
            }
        }
    }

    cout << "\nVetor ordenado: ";
    mostrarVetor(vetor, tamanho);

    cout << "Comparacoes: " << comparacoes << endl;
    cout << "Trocas: " << trocas << endl;
}

int main() {

    // Valores utilizados no teste
    int vetor[] = {5, 3, 8, 1, 2};

    // Calcula a quantidade de elementos
    int tamanho = 5;

    cout << "Vetor original: ";
    mostrarVetor(vetor, tamanho);

    // Executa o Bubble Sort
    bubbleSort(vetor, tamanho);

    return 0;
}
