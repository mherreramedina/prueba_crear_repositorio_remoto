#include <iostream>

int main() {

  std::cout <<"               Buen día estimado(a) consumidor"<<std::endl <<std::endl;
 std::cout <<" Bienvenido(a) a esta encuesta sobre habitos alimenticios en adultos de la ciudad de Montería" <<std::endl <<std::endl;
  
int continuar_1;
       std::cout << "Por favor presione cualquier número y oprima la tecla enter para continuar" << std::endl << std::endl;
  std::cin>>continuar_1;
  std::cout<< std::endl << "Datos generales" <<std::endl<<std::endl;

  std::string nombre_1;  
  std::cout << "por favor escriba su primer nombre y oprima la tecla enter" <<std::endl;
  std::cin >>nombre_1 ;
  
std::string apellido_1;  
  std::cout << "por favor escriba su primer apellido y oprima la tecla enter" <<std::endl;
  std::cin >>apellido_1;

  int edad_1;  
  std::cout << "por favor escriba su edad y oprima la tecla enter" <<std::endl;
  std::cin >>edad_1;

  double peso_1;  
  std::cout << "por favor escriba su peso hasta maximo dos decimales y oprima la tecla enter" <<std::endl;
  std::cin >>peso_1;

  std::string reside_en_monteria_1;  
  std::cout << "¿Reside en la ciudad de Montería? por favor escriba si o no y oprima la tecla enter" <<std::endl;
  std::cin >>reside_en_monteria_1;

  double anhos_vivir_monteria_1;  
  std::cout << "por favor escriba cuantos años lleva viviendo en la ciudad de Montería y oprima la tecla enter" <<std::endl;
  std::cin >>anhos_vivir_monteria_1;
  std::cout<< std::endl << "Datos especificos" <<std::endl<<std::endl;

  int continuar_2;
       std::cout << "A continuación se le pedira escribir tres frutas que sean de su agrado. Por favor presione cualquier número y oprima la tecla enter para continuar" << std::endl << std::endl;
  std::cin>>continuar_2;
    
std::string fruta_1;  
  std::cout << "por favor escriba su primera fruta favorita y oprima la tecla enter" <<std::endl;
  std::cin >>fruta_1;

  std::string fruta_2;  
  std::cout << "por favor escriba su segunda fruta favorita y oprima la tecla enter" <<std::endl;
  std::cin >>fruta_2;

  std::string fruta_3;  
  std::cout << "por favor escriba su tercera fruta favorita y oprima la tecla enter" <<std::endl;
  std::cin >>fruta_3;

  std::string confirmar_1;  
std::cout << "¿Desea ver el formulario para confirmar? por favor escriba si o no y oprima la tecla enter" <<std::endl;
  std::cin >>confirmar_1;
  
//a partir de acá se mostrarán los datos del formulario
std::cout<< "Nombre: " <<nombre_1 << " " <<apellido_1 <<std::endl;
  std::cout<<"Edad: "<<edad_1 << std::endl;
  std::cout<<"Peso; "<<peso_1 << std::endl;
  std::cout<<"Reside en la ciudad de Montería: "<<reside_en_monteria_1 << std::endl;
    std::cout<<"Años de vivir en Montería: "<<anhos_vivir_monteria_1 << std::endl;
std::cout<<"Fruta 1: ; "<<fruta_1 << std::endl;
std::cout<<"Fruta 2: ; "<<fruta_2 << std::endl;
std::cout<<"Fruta 3: ; "<<fruta_3 << std::endl;
return 0;
}