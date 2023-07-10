#include <iostream>

int numero()
{
  std::cout<<"escriba un numero: "<<"\n";
  int x;
  std::cin>>x;
  return x;
}

int doubleNumber()
{
  int x=numero();
    std::cout << x << " doubled is: " << x * 2 << '\n';
  return x;
}

int main()
{
  int x { doubleNumber()};
    return 0;
}