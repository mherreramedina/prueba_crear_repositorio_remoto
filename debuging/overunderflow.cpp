#include <cmath>   // math.h math.cpp
#include <cstdlib> // stdlib.h
#include <iostream>

int main(int argc, char **argv) {

  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);

  double under = 1.0, over = 1.0;

  int N = std::atoi(argv[1]);

  std::cout << "N \t under  \t\t\t\t  over" << std::endl;
  for (int i = 0; i < N; i++) {
    under /= 2.;
    over *= 2.;
    std::cout << i << "\t" << under << "\t\t\t\t" << over << std::endl;
  }

  return 0;
}