#include "stdio.h"
#include <iostream> // std::cout, std::cin
#include <vector>   // std::vector

// FUNCIÓN 1
std::vector<int> suma_igual_num_max(int num_suma) {

  std::vector<int> triplete;
  /*
    No tiene tamaño fijo
    triplete.size()
    triplete.push_back()
    triplete.begin()
    triplete.end()
  */

  // a < b < c
  for (int a = 1; a < (num_suma / 3); ++a) {
    for (int b = a + 1; b < (2 * num_suma / 3); ++b) {
      for (int c = b + 1; c < num_suma; ++c) {
        if (a + b + c == num_suma) {
          triplete.push_back(a);
          triplete.push_back(b);
          triplete.push_back(c);
        }
      }
    }
  }

  return triplete;
}
// FUNCIÓN 2
std::vector<int> suma_de_cuadrados(int num_suma_2) {
  std::vector<int> triplete_final;

  std::vector<int> triplete = suma_igual_num_max(num_suma_2);
  int a = triplete[0];
  int b = triplete[1];
  int c = triplete[2];

  std::cout << " " << a << " " << b << " " << c << std::endl;

  if (es_triplete_pitagorico(a,b,c)) {

    triplete_final.push_back(a);
    triplete_final.push_back(b);
    triplete_final.push_back(c);
  }
  return triplete_final;
}


// Función 3
bool es_triplete_pitagorico(int a, int b, int c){
  if (a*a + b*b == c*c){
    return true;
  }
  else {
    return false;
  }
}

int main() {

  std::vector<int> triplete_pitagorico = suma_de_cuadrados(1000);

  int a = triplete_pitagorico[0];
  int b = triplete_pitagorico[1];
  int c = triplete_pitagorico[2];

  std::cout << a << " " << b << " " << c << std::endl;
  std::cout << "la multiplicación entre a, b y c es: " << a * b * c
            << std::endl;

  return 0;
}