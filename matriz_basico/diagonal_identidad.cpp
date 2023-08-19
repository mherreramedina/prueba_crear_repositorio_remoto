#include <iostream>

int main() {

  const int N = 10, M = 10;
  int matriz_ident[N][M];
  for (int i = 1; i <N; ++i) {
    for (int j = 1; j < M; ++j) {
      if (i == j)
        matriz_ident[j][i] = 1;
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