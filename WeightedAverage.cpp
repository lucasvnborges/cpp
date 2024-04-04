#include <iostream>
using namespace std;

float mediaPonderada(float notas[], float pesos[], int tamanho) {
    float somaNotas = 0;
    float somaPesos = 0;

    for (int i = 0; i < tamanho; i++) {
        somaNotas += notas[i] * pesos[i];
        somaPesos += pesos[i];
    }

    return somaNotas / somaPesos;
}

int main() {
    float notas[] = { 9.5, 8.0, 6.5, 9.0, 7.2 };
    float pesos[] = { 3.0, 2.5, 2.5, 1.0, 1.0 };
    int tamanho = sizeof(notas) / sizeof(notas[0]);

    float resultado = mediaPonderada(notas, pesos, tamanho);

    cout << "A média ponderada das notas é: " << resultado << endl;

    return 0;
}