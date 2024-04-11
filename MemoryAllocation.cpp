#include <iostream>

int main()
{
    int n = 5; // Número de elementos no array

    // Aloca memória para o array
    int *array = new int[n];

    // Preenche o array
    for (int i = 0; i < n; i++)
    {
        array[i] = i;
    }

    // Imprime o array
    for (int i = 0; i < n; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    // Libera a memória alocada para o array
    delete[] array;

    return 0;
}
