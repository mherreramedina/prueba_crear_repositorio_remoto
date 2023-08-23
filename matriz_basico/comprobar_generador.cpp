 // Tarea 5: Comprobar con un generador uniforme entero y con 1000 números entre 1 y 10 que en efecto la distribución es uniforme (como se hizo en aleatorio.cpp)//

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <random>

int main() {

  int aleatorio;
  int casillas[10] = {0};
  std::default_random_engine generator;
  std::uniform_int_distribution<int> distribution(0,9);

  for (int i = 1; i < 10000; i++) {
    // Genera un número entre 1 y 10
    aleatorio =  distribution(generator);
    ++casillas[aleatorio];
  }

  std::printf("#\t\tcantidad\n");
  for (int j = 0; j < 10; j++) {
    std::printf("%d\t\t%1.5d\n", j + 1, casillas[j]);
     
  }

  return 0;
}