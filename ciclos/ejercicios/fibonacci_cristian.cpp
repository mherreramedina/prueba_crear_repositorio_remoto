#include <iostream>

int main() {

  // Determina la cantidad de números de Fibonacci que se quieren
  int cant_num_fibonacci = 32;

  // Se inicializan los primeros dos términos de la sucesión
  long numero_anterior = 1;
  long numero_actual = 2;

  std::cout << numero_anterior << std::endl;
  std::cout << numero_actual << std::endl;

  long numero_siguiente;

  long suma = 2;

  for (int i = 1; i <= cant_num_fibonacci - 2; i++) {

    // Se calcula el siguiente número de Fibonacci
    numero_siguiente = numero_anterior + numero_actual;
    std::cout << numero_siguiente << std::endl;
    if (numero_siguiente%2 == 0)
      suma += numero_siguiente;
      //suma = suma + numero_siguiente;

    // Actualizamos los números
    numero_anterior = numero_actual;
    numero_actual = numero_siguiente;
  }

  std::cout << "La suma de los números pares de Fibonacci es " << suma << "\n";

  return 0;
}