#include <cmath>
#include <cstdio>
#include <iostream>
#include <random>

void matriz_identidad(int N, int M);
void diagonal_poisson(int N, int M, double lambda);
void superior_normal(int N, int M, double mu, double sigma);
void transpuesta(int N, int M, double mt19937min, double mt19937max);
void transpuesta_direcciones(int N, int M,double mt19937min, double mt19937max);

int main() {

  const int N = 10, M = 10;
  const double lambda = 3.1, mu = 3, sigma = 0.9, mt19937min = 0.0,
               mt19937max = 5.0;
  matriz_identidad(N, M);
  diagonal_poisson(N, M, lambda);
  superior_normal(N, M, mu, sigma);
  transpuesta(N, M, mt19937min, mt19937max);
  transpuesta_direcciones(N, M,mt19937min, mt19937max);

  return 0;
}

void matriz_identidad(int N, int M) {
  std::cout << "matriz identidad:" << std::endl << std::endl;
  int matriz_ident[N][M];
  for (int i = 1; i < N; ++i) {
    for (int j = 1; j < M; ++j) {
      if (i == j)
        matriz_ident[j][i] = 1;
      else
        matriz_ident[j][i] = 0;
    }
  }
  for (int i = 1; i < N; ++i) {
    for (int j = 1; j < M; ++j)
      std::cout << matriz_ident[j][i];

    std::cout << std::endl;
  }
  std::cout << std::endl;
  return;
}

void diagonal_poisson(int N, int M, double lambda) {
  std::cout << "diagonal distribución poisson:" << std::endl << std::endl;
  int matriz_ident[N][M];

  std::default_random_engine generator;
  std::poisson_distribution<int> distribution(lambda);

  for (int i = 1; i < N; ++i) {
    for (int j = 1; j < M; ++j) {
      if (i == j)
        matriz_ident[j][i] = distribution(generator);
      else
        matriz_ident[j][i] = 0;
    }
  }
  for (int i = 1; i < N; ++i) {
    for (int j = 1; j < M; ++j)
      std::cout << matriz_ident[j][i];

    std::cout << std::endl;
  }
  std::cout << std::endl;
  return;
}

void superior_normal(int N, int M, double mu, double sigma) {

  std::cout << "superior normal:" << std::endl << std::endl;
  int matriz_ident[N][M];

  std::default_random_engine generator;
  std::normal_distribution<double> distribution(mu, sigma);

  for (int i = 1; i < N; ++i) {
    for (int j = 1; j < M; ++j) {
      if (i <= j)
        matriz_ident[j][i] = distribution(generator);
      else
        matriz_ident[j][i] = 0;
    }
  }
  for (int i = 1; i < N; ++i) {
    for (int j = 1; j < M; ++j)
      // std::cout << matriz_ident[j][i] ;
      std::printf("%4.1d", matriz_ident[j][i]);
    std::cout << std::endl;
  }
  std::cout << std::endl;
  return;
}

void transpuesta(int N, int M, double mt19937min, double mt19937max) {

  float matriz[N][M];

  const int SEED = 128;

  std::mt19937 generador(SEED);
  std::uniform_real_distribution<float> distribucion(mt19937min, mt19937max);

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      matriz[i][j] = distribucion(generador);
    }
    std::printf("\n");
  }
  std::printf("Matriz original es:"
              "\n");
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {

      std::printf("%3.1f\t\t", matriz[i][j]);
    }
    std::printf("\n");
  }
  std::printf("Matriz transpuesta es: "
              "\n");
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {

      std::printf("%3.1f\t\t", matriz[j][i]);
    }
    std::printf("\n");
  }
  return;
}

void transpuesta_direcciones(int N, int M,double mt19937min, double mt19937max) {

  float matriz[N][M];

  const int SEED = 128;

  std::mt19937 generador(SEED);
  std::uniform_real_distribution<float> distribucion(mt19937min, mt19937max);

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      matriz[i][j] = distribucion(generador);
    }
    std::printf("\n");
  }
  std::printf("Matriz original es:"
              "\n");
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {

      std::printf("%7.1f\t\t", matriz[i][j]);
    }
    std::printf("\n");
  }
  std::cout << "direcciones son:" << std::endl << std::endl;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      std::printf("%p\t", &matriz[i][j]);
    }
    std::printf("\n");
  }
  return;
}