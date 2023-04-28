#include <iostream>
#include <string>

using namespace std;

// Función para contar la cantidad de vocales "a" en una frase
int ContarLetraA(string f) {
    int contador = 0; // Variable para llevar la cuenta de las vocales "a"
    for (int i = 0; i < f.length(); i++) { // Recorre cada caracter de la frase
        if (f[i] == 'a' || f[i] == 'A') { // Compara si el caracter es una "a" o "A"
            contador++; // Si es una "a" o "A", incrementa el contador
        }
    }
    return contador; // Devuelve la cantidad de vocales "a" encontradas
}

int main() {
    string frase; // Variable para almacenar la frase ingresada por el usuario
    cout << "Ingrese una frase: ";
    getline(cin, frase); // Lee la frase ingresada por el usuario

    int cantidadA = ContarLetraA(frase); // Llama a la función ContarLetraA() para contar la cantidad de vocales "a"
    cout << "La cantidad de vocales 'a' en la frase es: " << cantidadA << endl; // Imprime el resultado

    return 0;
}

