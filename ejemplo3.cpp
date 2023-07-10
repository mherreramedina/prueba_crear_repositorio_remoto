#include <iostream>

int numero_usuario() {
  int x;
  std::cout << "Escriba un numero"
            << "\n";
  std::cin >> x;
  return x;
}



int calculando_mayor(int x1, int x2, int x3) {
  int num_mayor;
  if (x1 >= x2 && x1 >= x3) {
    num_mayor = x1;
  }
  else if (x2 >= x1 && x2 >= x3) {
    num_mayor = x2;
  }

  else {
    num_mayor = x3;
}
  return num_mayor;
}

int main() {
  int x1 = {numero_usuario()};
  int x2 = {numero_usuario()};
  int x3 = {numero_usuario()};
  int num_mayor = {calculando_mayor(x1, x2, x3)};
  std::cout << "El número mayor es: " << num_mayor << "\n";
  return 0;
}