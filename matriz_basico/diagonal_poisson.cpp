#include <iostream>
#include <random>

int main() {

  const int N = 8, M = 8;
  int matriz_ident[N][M];

  std::default_random_engine generator;
  std::poisson_distribution<int> distribution(1.1);
  
  for (int i = 1; i <N; ++i) {
    for (int j = 1; j < M; ++j) {
      if (i == j)
        matriz_ident[j][i] = distribution(generator);
      else
        matriz_ident[j][i] = 0;
    }
  }
  for (int i = 1; i < N; ++i) {
    for (int j = 1; j < M; ++j) 
      std::cout << matriz_ident[j][i] ;
    
    std::cout << std::endl;
  }
      return 0;
    }