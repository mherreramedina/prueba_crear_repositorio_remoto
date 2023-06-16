#include <iostream>

int main(){

  /*
    Si es lunes, el almuerzo es pasta.
    Si es martes, el almuerzo es pescado.
    Si es miércoles, el almuerzo son verduras.
    Si es jueves, el almuerzo es ensalada.
    Si es viernes, el almuerzo es pollo.
    Si es fin de semana, el almuerzo es bandeja paisa.
    Imprima el almuerzo según el día.
  */
  //std::string dia_semana = "Lunes";
  /*
    En este programa se considera la siguiente definición:
    Lunes --> 1
    Martes --> 2
    Miércoles --> 3
    Jueves --> 4
    Viernes --> 5
    Sábado --> 6
    Domingo --> 7
  */
  
  int dia_semana;
  std::cout << "Indique el día de la semana: ";
  std::cin >> dia_semana;
  std::string almuerzo = "";
  switch(dia_semana){
    case 1: almuerzo = "Pasta";
    break;
    case 2: almuerzo = "Pescado";
    break;
    case 3: almuerzo = "Verduras";
    break;
    case 4: almuerzo = "Ensalada";
    break;
    case 5: almuerzo = "Pollo";
    break;
    case 6:
    case 7: almuerzo = "Bandeja Paisa";
    break;
    default: almuerzo = "Día equivocado";
  }

  std::cout << "Almuerzo: " << almuerzo << std::endl;

  return 0;
}