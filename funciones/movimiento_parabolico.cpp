#include <cmath>
#include <cstdlib>
#include <iostream>

double velx(int vel, int angulo);         // calcula la velocidad en x
double vely(int vel, int angulo);         // calcula la velocidad en y
double posic_x(double velx, double const_b, double pos_ini_X); // calcula la posición en x
double posic_y(double vely, double const_b, double pos_ini_Y); // calcula la posición en y

int main() {
  int vel = 70, angulo = 25;
  double const_b = 0.01, pos_ini_X = 0,pos_ini_Y = 0;
  double vx = velx(vel, angulo);
  double vy = vely(vel, angulo);
  double px = posic_x(vx, const_b, pos_ini_X);
  double py = posic_y(vy, const_b, pos_ini_Y);
  return 0;
}

double velx(int vel, int angulo) {
  double velx = vel * cos(angulo * M_PI / 180);
  std::cout << "La velocidad en x es: " << velx << std::endl;
  return velx;
}
double vely(int vel, int angulo) {
  double vely = vel * sin(angulo * M_PI / 180);
  std::cout << "La velocidad en y es: " << vely << std::endl;
  return vely;
}
double posic_x(double vx, double const_b,double pos_ini_X) {
  double posic_x=0;
  for (double  t = 0; t <= 2.7; t = t + 0.1) {
     posic_x = (vx/const_b) * (1-exp(-const_b * t))+ pos_ini_X;
    std::cout << posic_x<<std::endl;
        }
  return posic_x;
}
double posic_y(double vy, double const_b,double pos_ini_Y) {
  double posic_y=0;
  for (double  t = 0; t <= 2.7; t = t + 0.1) {
     posic_y =((1/const_b) *((9.81/const_b)+vy)*(1-exp(-const_b * t)))-(9.81*t/const_b)+ pos_ini_Y;
    std::cout << posic_y<<std::endl;
        }
  return posic_y;
}