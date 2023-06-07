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
  std::cout << "por favor escriba su primera fruta favorita y oprima la tecla enter" <<std::endl<<std::endl;
  std::cin >>fruta_1;
 std::cout <<""<<std::endl;

  std::string fruta_2;  
  std::cout << "por favor escriba su segunda fruta favorita y oprima la tecla enter" <<std::endl;
  std::cin >>fruta_2;
   std::cout <<""<<std::endl;

  std::string fruta_3;  
  std::cout << "por favor escriba su tercera fruta favorita y oprima la tecla enter" <<std::endl;
  std::cin >>fruta_3;
   std::cout <<""<<std::endl;

  std::string confirmar_1;
  std::cout <<"¿Consume usted estas frutas con regularidad? por favor escriba si o no" <<std::endl;
  std::cin>>confirmar_1;
  std::cout<<""<<std::endl;

  std::string frecuencia_1;
  std::string confirmar_2; 
  std::cout<<"Por favor seleccione del siguiente menu la frecuencia con que usted consume esas frutas"<<std::endl;
  std::cout<<"a. Muy frecuente"<<std::endl;
  std::cout<<"b. No muy frecuente"<<std::endl;
  std::cout<<"c. Casi nunca las consumo"<<std::endl<<std::endl;
  std::cin>>frecuencia_1;
  std::cout<<frecuencia_1 <<" "<<"¿es la opción seleccionada por usted? escriba si o no"<<std::endl;
  std::cin >>confirmar_2;
  std::cout <<""<<std::endl;

  std::string confirmar_3;
  std::cout <<"Consume usted la denominada comida chatarra, por favor escriba si o no"<<std::endl;
  std::cin >>confirmar_3;
std::cout<<" "<<std::endl;

  std::string comida_chatarra_favorita;
  std::cout<<"por favor escriba su comida chatarra favorita entre comillas y de clic en la tecla enter"<<std::endl;
  std::cin>>comida_chatarra_favorita;
  std::cout<<" "<<std::endl;

std::string plato_tipico_favorito;  
std::string confirma_4;
std::cout<<"por favor seleccione de la siguiente lista su plato típico favorito y oprima la tecla enter"<<std::endl;
  std::cout<<"a. Mote de queso"<<std::endl;
  std::cout<<"b. Cabeza e’ gato"<<std::endl;
  std::cout<<"c. Buñuelitos de maíz biche"<<std::endl;
  std::cout<<"d. Bollo limpio y bollo dulce."<<std::endl;
  std::cout<<" "<<std::endl;
  std::cin>>plato_tipico_favorito;
  std::cout<<" "<<std::endl;
  std::cout<<plato_tipico_favorito <<" "<<"¿es la opción seleccionada por usted? escriba si o no"<<std::endl;
std::cin>>confirma_4;
  std::cout<<" "<<std::endl;

  std::string acepta_invitacion;
std::cout<<"¿Aceptaria una invitación a cenar en un restaurante vegetariano?, por favor escriba si o no y clic en enter"<<std::endl;
  std::cin>>acepta_invitacion;
  std::cout<<" "<<std::endl;
  
  std::string confirmar_5;  
std::cout << "¿Desea ver el formulario para confirmar? por favor escriba si o no y oprima la tecla enter" <<std::endl;
  std::cin >>confirmar_5;
   std::cout <<""<<std::endl;
  
//a partir de acá se mostrarán los datos del formulario
std::cout<< "Nombre: " <<nombre_1 << " " <<apellido_1 <<std::endl;
  std::cout<<"Edad: "<<edad_1 << std::endl;
  std::cout<<"Peso; "<<peso_1 << std::endl;
  std::cout<<"Reside en la ciudad de Montería: "<<reside_en_monteria_1 << std::endl;
    std::cout<<"Años de vivir en Montería: "<<anhos_vivir_monteria_1 << std::endl;
std::cout<<"Fruta 1: "<<fruta_1 << std::endl;
std::cout<<"Fruta 2: "<<fruta_2 << std::endl;
std::cout<<"Fruta 3: "<<fruta_3 << std::endl;
std::cout<<"Consume frutas con regularidad: "<< confirmar_1<<std::endl;
  std::cout<<"Consume comida chatarra: "<<confirmar_3<<std::endl;
  std::cout<<"Comida chatarra favorita: "<<comida_chatarra_favorita<<std::endl;
  std::cout<<"Plato típico favorito: "<<plato_tipico_favorito <<std::endl;
  std::cout<<"¿Acetaria una invitación a cenar en un restaurante vegetariano?"<<" "<< acepta_invitacion<<std::endl;
return 0;
}