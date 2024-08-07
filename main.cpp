#include <iostream>
using namespace std;
#include "valormax.h"
#include "valormin.h"

const int SIZE = 10;
int numbers[SIZE] = {5, 2, 9, 1, 5, 6, 3, 2, 7, 8};



int main() {
    
    // gracias J por el código que fuerza UTF8 y así vemos mensajes con títldes y otros símbolos
    setlocale(LC_ALL, "ca_ca.utf8");





    // Imprimir el array original
    cout << "Array original: ";
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Ordenar el array (burbuja)
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    // Imprimir el array ordenado
    cout << "Array ordenado: ";
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    ValorMax();
    ValorMin();

    // Calcular el promedio
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += numbers[i];
    }
    double average = static_cast<double>(sum) / SIZE;
    cout << "Promedio: " << average << endl;

    // Contar ocurrencias de un valor dado
    int valueToFind = 5;
    int count = 0;
    for (int i = 0; i < SIZE; i++) {
        if (numbers[i] == valueToFind) {
            count++;
        }
    }
    cout << "El valor " << valueToFind << " aparece " << count << " veces en el array." << endl;

    return 0;
}