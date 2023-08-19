#include <cmath>
#include <iostream>

// Series
double suma1(int N);

// Series
double suma2(int N);

int main() {

  std::cout.precision(10);
  std::cout.setf(std::ios::scientific);

  for (int N = 10; N <= 100; ++N) {
    double sum1 = suma1(N);
    double sum2 = suma2(N);
    double delta = std::fabs((sum1 - sum2)); // a + b = b + a

    std::cout << N << "\t\t" << delta << "\n";
  }

  return 0;
}

double suma1(int N) {
  double sum = 0;
  int sign = -1;
  for (int i = 1; i <= 2 * N; i++) {
    sum += sign * 1.0 * i / (i + 1);
    sign *= -1;
  }
  return sum;
}

double suma2(int N) {
  double sum = 0;
  double sumP = 0;
  double sumN = 0;
  for (int n = 1; n <= N; n++) {
    sumP += 2.0 * n / (2 * n + 1);
    sumN += ((2.0 * n) - 1.0) / (2 * n);
    sum = sumP - sumN;
  }
  return sum;
}