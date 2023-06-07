#include "iostream"

int main(){

  int edad;

  std::cout << "¿Cual es tu edad?" << std::endl;
  
  //edad = 29 se va a volver una entrada

  std::cin >> edad;

  std::cout << "Edad:" << edad << std::endl;
   
  return 0;
}