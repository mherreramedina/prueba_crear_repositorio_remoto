// Headers
#include <cmath>
#include <iostream>

double myExp(double x);

// Cuerpo

int main(void) {
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);

  std::cout << " x \t exp \t\t\t\t myExp \n";
  for (double x = 0.0; x < 10.12312; x += 0.1) {
    std::cout << x << "\t" << std::exp(x) << "\t\t\t\t" << myExp(x)
              << std::endl;
  }
  return 0;
}

double myExp(double x) {

  double sum = 1;
  double term = 1;
  double i = 1;
  double eps = 1.0e-8; //Precisión de 8 - 2 cifras decimales

  while (std::fabs(term/sum) > eps) {
    term = term * x / i;
    sum = sum + term;
    i += 1;
  }
  return sum;
}
