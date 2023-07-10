#include <iostream>

int main() {

  int n, y = 0;
  std::cout << "Número";
  std::cin >> n;
  while (n > 0) {
    y = n % 10;
    std::cout << y;
    n = n / 10;
  }
  std::cout << std::endl;
  return 0;
}