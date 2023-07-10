#include <iostream>
int sueldo_base();                 // se ingresa el sueldo base del empleado
int nivel();                       // se ingresa el nivel del empleado
int descuentos(int SB, int NIVEL); // se calculan los descuentos
int bono(int SB, int NIVEL);       // se calcula el valor del bono

/*menú principal*/
int main() {
  int SB = {sueldo_base()};
  int NIVEL = {nivel()};
  int descuento = {descuentos(SB, NIVEL)};
  int valor_bono = {bono(SB, NIVEL)};
  int salario_final = SB - descuento + valor_bono;
  std::cout << "el salario final es:$" << salario_final << "\n";
  return 0;
}

/*Se ingresa el salario base del empleado*/
int sueldo_base() {
  int salario_base;
  std::cout << "Ingrese el salario base del empleado"
            << "\n";
  std::cin >> salario_base;
  return salario_base;
}

/*El ingresa el nivel del empleado*/
int nivel() {
  int nivel;
  do {
    std::cout << "Ingrese el nivel del empleado: \n";
    std::cout << "0 \n";
    std::cout << "1 \n";
    std::cout << "2 \n";
    std::cout << "3 \n";
    std::cin >> nivel;
  } while (nivel != 0 && nivel != 1 && nivel != 2 && nivel != 3);
  return nivel;
}

/*calcula los descuentos obligatorios*/
int descuentos(int SB, int NIVEL) {
  int descuento_ISSS = (SB * 3.1) / 100;
  int descuento_renta = (SB * 9.3) / 100;
  int descuento_seguro = (SB * 11.4) / 100;
  if (NIVEL == 0) {
    int descuento_total = descuento_ISSS + descuento_renta;
    return descuento_total;
  } else if (NIVEL == 1) {
    int descuento_total = descuento_ISSS + descuento_renta;
    return descuento_total;
  } else if (NIVEL == 2) {
    int descuento_total = descuento_ISSS + descuento_renta + descuento_seguro;
    return descuento_total;
  } else {
    int descuento_total = descuento_ISSS + descuento_renta + descuento_seguro;
    return descuento_total;
  }
}

/*Calcula el valor del bono*/
int bono(int SB, int NIVEL) {
  if (NIVEL == 0) {
    int valor_bono = 7;
    return valor_bono;
  } else if (NIVEL == 1) {
    int valor_bono = (SB * 6.4) / 100;
    return valor_bono;
  } else if (NIVEL == 2) {
    int valor_bono = (SB * 13.94) / 100;
    return valor_bono;
  } else {
    int valor_bono = (SB * 21.04) / 100;
    return valor_bono;
  }
}
