
#include <iostream> // Biblioteca de entrada e saída
using namespace std; // Permite usar cout sem std::

int comparacoes = 0; // Conta as comparações
int movimentos = 0; // Conta os movimentos dos valores

void merge(int v[], int inicio, int meio, int fim) { // Junta duas partes ordenadas
    int i = inicio; // Inicio da primeira parte
    int j = meio + 1; // Inicio da segunda parte
    int k = 0; // Posição do vetor auxiliar

    int aux[100]; // Vetor auxiliar

    while (i <= meio && j <= fim) { // Enquanto houver valores nas duas partes
        comparacoes++; // Conta uma comparação

        if (v[i] <= v[j]) { // Verifica qual valor é menor
            aux[k] = v[i]; // Copia o valor da primeira parte
            i++; // Avança na primeira parte
        } else {
            aux[k] = v[j]; // Copia o valor da segunda parte
            j++; // Avança na segunda parte
        }

        k++; // Avança no vetor auxiliar
    }

    while (i <= meio) { // Copia os valores restantes da primeira parte
        aux[k] = v[i]; // Copia o valor
        i++; // Avança na primeira parte
        k++; // Avança no auxiliar
    }

    while (j <= fim) { // Copia os valores restantes da segunda parte
        aux[k] = v[j]; // Copia o valor
        j++; // Avança na segunda parte
        k++; // Avança no auxiliar
    }

    for (i = inicio, k = 0; i <= fim; i++, k++) { // Percorre o trecho ordenado
        v[i] = aux[k]; // Devolve os valores ao vetor original
        movimentos++; // Conta um movimento
    }
}

void mergeSort(int v[], int inicio, int fim) { // Função principal do Merge Sort
    if (inicio < fim) { // Verifica se existem pelo menos dois elementos
        int meio = (inicio + fim) / 2; // Calcula o meio do vetor

        mergeSort(v, inicio, meio); // Ordena a primeira metade
        mergeSort(v, meio + 1, fim); // Ordena a segunda metade

        merge(v, inicio, meio, fim); // Junta as duas metades
    }
}

int main() { // Início do programa
    int v[] = {5, 3, 8, 4, 2}; // Vetor inicial
    int tamanho = 5; // Quantidade de elementos

    mergeSort(v, 0, tamanho - 1); // Executa a ordenação

    cout << "Resultado: "; // Mostra o resultado
    for (int i = 0; i < tamanho; i++) { // Percorre o vetor
        cout << v[i] << " "; // Imprime cada elemento
    }

    cout << "\nComparacoes: " << comparacoes; // Mostra comparações
    cout << "\nMovimentos: " << movimentos; // Mostra movimentos

    return 0; // Finaliza o programa
}
