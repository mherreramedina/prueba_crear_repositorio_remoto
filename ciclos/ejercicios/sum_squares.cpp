#include <iostream>
/*
FUNCIONES
  tipo_de_dato_que_retorna nombre_de_funcion( argumentos ){

  }

*/

// Suma de cuadrados
int suma_de_cuadrados(int num_max) {
  // Vamos a hacer la suma de cuadrados
  int suma = 0;
  for (int i = 1; i <= num_max; ++i) {
    suma += i * i;
  }
  return suma;
}

// Cuadrado de la suma

int cuadrado_de_suma(int nume_max) {
  // Vamos a hacer el cuadrado de la suma
  int suma = 0;
  for (int i = 1; i <= nume_max; ++i) {
    suma += i;
  }
  int total = suma * suma;
  return total;
}

int main() {

  int numero_maximo = 100;

  // Resultado de la suma de cuadrados
  int res_suma_sq = suma_de_cuadrados(numero_maximo);

  std::cout << "La suma de cuadrados hasta " << numero_maximo << " es igual a "
            << res_suma_sq << std::endl;

  // Resultado del cuadrado de la suma
  int res_sq_suma = cuadrado_de_suma(numero_maximo);

  std::cout << "El cuadrado de la suma hasta " << numero_maximo
            << " es igual a " << res_sq_suma << std::endl;

  std::cout
      << "la diferencia entre el cuadro de la suma y la suma de cuadrados es"
      << std::endl
      << res_sq_suma - res_suma_sq << std::endl;

  return 0;
}