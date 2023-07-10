#include <iostream>

int numero_usuario ()
{
int x=0;
  std::cout<<"Escriba un numero"
std::cin>>x;
  return x;
}

int calculando_mayor(int x1, int x2, int x3)
{
  int num_mayor = 0;
  if (x1>x2>x3)
  {
    num_mayor=x1;
  }
  if (x2>x1>x3)
  {
     num_mayor=x2;
  }
    
  if (x3>x2>x1)
  {
    num_mayor=x3;
  }
}

int main() {
int x1={numero_usuario()};
  int x2={numero_usuario()};
  int x3={numero_usuario()};
  int num_mayor={calculando_mayor(x1,x2,x3)};
  std::cout<<"El número mayor es: "<< "\n";
  return 0;
}