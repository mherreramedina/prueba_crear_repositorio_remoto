#include <iostream>
#include <stdio.h>
/*ciclo for para imprimir una piramide de asteriscos y "a" intercalados*/

int main() {

  int num = 11;

  for (int i = 1; i <= num; i = i + 2) {
    for (int k = 1; k <= num - i; k = k + 2){
    std::cout<< " "; }
    
    for (int j = 1 ; j <= i ; j = j + 1 )
    std::cout << "*";

    std::cout << "\n";
  }
    std::cout << "\nTerminó el ciclo\n";
  return 0;
}