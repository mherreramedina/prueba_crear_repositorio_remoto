#include <iostream>
#include <random>
#include <cstdio>

int main() {

  const int N = 9, M = 9;
  int matriz_ident[N][M];

  std::default_random_engine generator;
  std::normal_distribution<double> distribution(3.0,0.9);
  
  for (int i = 1; i <N; ++i) {
    for (int j = 1; j < M; ++j) {
      if (i <= j)
        matriz_ident[j][i] = distribution(generator);
      else
        matriz_ident[j][i] = 0;
    }
  }
  for (int i = 1; i < N; ++i) {
    for (int j = 1; j < M; ++j) 
      //std::cout << matriz_ident[j][i] ;
     std::printf("%1.1d\t\t", matriz_ident[j][i]);
    std::cout << std::endl;
  }
      return 0;
    }