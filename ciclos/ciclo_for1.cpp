#include <iostream>
#include <stdio.h>
/*ciclo for para imprimir una piramide de asteriscos y "a" intercalados*/

int main() {

  int num = 21; //Corresponde al numero de caracteres en el nivel mas bajo

  for (int i = 1; i <= num; i = i + 2) {
    for (int k = 1; k <= (num - i) / 2; k = k + 1) {
      std::cout << " ";
    }
    for (int j = 1; j <= i; j = j + 1) {
      if (i % 4 == 1)
        std::cout << "*";
      else
        std::cout << "a";
    }
    std::cout << "\n";
  }
  std::cout << "\nTerminó el ciclo\n";

  return 0;
}
