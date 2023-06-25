// Encabezado
#include <iostream> // Llamado de librerias
/*If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.Find the sum of all the multiples of 3 or 5 below 1000. */
int main() {
  // Declaramos variables
  int primer_numero_seleccionado = 3;
  int segundo_numero_seleccionado = 5;
  int numero_limite = 1000;
  int sumatoria=0;
  // Desarrollo de la logica
  for (int busqueda_multiplos = 1; busqueda_multiplos < numero_limite;
       busqueda_multiplos = busqueda_multiplos + 1)
  // se crea bucle para que entienda hasta cual número debe cálcular los multiplos
  {
    if (busqueda_multiplos % primer_numero_seleccionado == 0){
      // función para calcular los multiplos del primer número
                 int numero_actual=busqueda_multiplos;
        sumatoria=sumatoria+numero_actual;
      
      }
  }

    for (int busqueda_multiplos = 1; busqueda_multiplos < numero_limite;
       busqueda_multiplos = busqueda_multiplos + 1)
  // se crea bucle para que entienda hasta cual número debe cálcular los multiplos
  {
    if (busqueda_multiplos % segundo_numero_seleccionado == 0){
      // función para calcular los multiplos del primer número
                 int numero_actual=busqueda_multiplos;
        sumatoria=sumatoria+numero_actual;
      
      }
  }
   std::cout << sumatoria<< std::endl;
  return 0;
}