#include <iostream>
#include <stdio.h>
/*ciclo for para imprimir una piramide de asteriscos y "a" intercalados*/

int main() {

  for (int i = 1; i <= 6; i = i + 1) {
    for (int j = 1; j <= 6 - i; j = j + 1) {
      std::cout << " ";
    }
    for (int k = 1; k <= i; k = k + 1) {
      std::cout << "*";
    }
    std::cout << std::endl;
  }
}