#include <cmath>
#include <cstdio>
#include <iostream>
#include <random>

int main() {

  const int N = 5, M = 5;

  float matriz[N][M];

  const int SEED = 128;

  std::mt19937 generador(SEED);
  std::uniform_real_distribution<float> distribucion(0.0, 2.0);

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      matriz[i][j] = distribucion(generador);
         }
    std::printf("\n");   
  }
     std::printf("Matriz original es:" "\n");
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
   
          std::printf("%7.1f\t\t", matriz[i][j]);
         }
    std::printf("\n");   
  }
 
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
          std::printf("%p\t", &matriz[i][j]);
         }
    std::printf("\n");   
  }
  return 0;
}