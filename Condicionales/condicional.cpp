#include <iostream>

/*
Programa para selección de menú
*/

int main() {
  std::string tipo_menu; /*Tipo menú*/
  std::cout << "¿Desea conocer el menu ejecutivo o corriente?" << std::endl;
  std::cin >> tipo_menu;
  if (tipo_menu == "ejecutivo") {
    std::string carne;
    std::cout << "Eliga entre churrasco o lomo" << std::endl;
    std::cin >> carne;
    std::string yuca_o_papa;
    if (carne == "churrasco") {
      std::cout << "desea churrasco con papa o yuca" << std::endl;
      std::cin >> yuca_o_papa;
      if (yuca_o_papa == "papa") {
        std::cout << "churrasco con papa cuesta $25.000 y le llegará en 15 "
                     "min, si desea algo de tomar, por favor informelo al "
                     "mesero cuando llegue"
                  << std::endl;
      } else if (yuca_o_papa == "yuca") {
        std::cout << "churrasco con yuca cuesta $26.000 y le llegará en 15 "
                     "min, si desea algo de tomar, por favor informelo al "
                     "mesero cuando llegue"
                  << std::endl;
      } 
    }else if (carne == "lomo") {

        std::cout << "desea lomo con papa o yuca" << std::endl;
        if (yuca_o_papa == "papa") {
          std::cout << "lomo con papa cuesta $30.000 y le llegará en 25 min, "
                       "si desea algo de tomar, por favor informelo al mesero "
                       "cuando llegue"
                    << std::endl;
        } else if (yuca_o_papa == "yuca") {
          std::cout << "lomo con yuca cuesta $32.000 y le llegará en 25 min, "
                       "si desea algo de tomar, por favor informelo al mesero "
                       "cuando llegue"
                    << std::endl;
        } 
    }

    
  } else if (tipo_menu == "corriente") {
          std::cout << "desea churrasco con papa o yuca" << std::endl;
          std::cin >> yuca_o_papa;
          if (yuca_o_papa == "papa")
        }
      }
    }
  }
}
}
}

return 0;
}