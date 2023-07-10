#include <iostream>
int numero_usuario_1(); //solicita el primer número 

int main(){

  int x={numero_usuario_1()};
  int y={numero_usuario_1()};

  std::cout<< "la resta de x-y es: "<< x-y<<"\n";
  std::cout<< "la división de x-y es: "<< (float)x/(float)y<<"\n";

return 0;  
}

int numero_usuario_1() {
  int x;
  std::cout << "Escriba un numero"
            << "\n";
  std::cin >> x;
    return x;
}

