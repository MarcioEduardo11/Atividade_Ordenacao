
#include <iostream>
using namespace std;

int comparacoes = 0, trocas = 0;

void quickSort(int v[], int inicio, int fim) {
    if (inicio < fim) {
        int pivo = v[fim]; // Escolhe o pivô
        int i = inicio - 1;

        for (int j = inicio; j < fim; j++) {
            comparacoes++; // Conta comparação

            if (v[j] < pivo) {
                i++;

                if (i != j) {
                    swap(v[i], v[j]); // Troca valores
                    trocas++;
                }
            }
        }

        if (i + 1 != fim) {
            swap(v[i + 1], v[fim]); // Posiciona o pivô
            trocas++;
        }

        int pos = i + 1;

        quickSort(v, inicio, pos - 1); // Ordena esquerda
        quickSort(v, pos + 1, fim); // Ordena direita
    }
}

int main() {
    int v[] = {5, 3, 8, 4, 2};
    int tamanho = 5;

    quickSort(v, 0, tamanho - 1);

    for (int i = 0; i < tamanho; i++)
        cout << v[i] << " ";

    cout << "\nComparacoes: " << comparacoes;
    cout << "\nTrocas: " << trocas;

    return 0;
}
