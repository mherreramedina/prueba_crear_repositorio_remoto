#include <cmath>
#include <cstdlib>
#include <iostream>

double velx(int vel, int angulo); // calcula la velocidad en x
double vely(int vel, int angulo); // calcula la velocidad en y
double posic_x(double velx, double const_b, double pos_ini_X,
               double t); // calcula la posición en x
double posic_y(double vely, double const_b, double pos_ini_Y,
               double t); // calcula la posición en y
double vel_inst_x(double velx, double const_b, double t); //calcula la velocidad instantanea en x
double vel_inst_y(double vy, double const_b, double t);//calcula la velocidad instantanea en y

int main() {
  int vel = 70, angulo = 25;
  double const_b = 0.01, pos_ini_X = 0, pos_ini_Y = 0, t = 0;
  double vx = velx(vel, angulo);
  double vy = vely(vel, angulo);

  //std::cout.precision(4);
  //std::cout.setf(std::ios::scientific);
  
  std::cout << " t \t\tposición en x \t\t\t posición en y \t\t\t velocidad en x \t\t\t velocidad en y \n";
  for (t = 0; t <= 6; t = t + 0.1) {
    double px = posic_x(vx, const_b, pos_ini_X, t);
    double py = posic_y(vy, const_b, pos_ini_Y, t);
    double vix = vel_inst_x( vx, const_b, t);
    double viy=vel_inst_y(vy,const_b, t);
    std::cout << t << "\t\t\t" << px << "\t\t\t\t" << py << "\t\t\t\t"<< vix<<"\t\t\t\t"<<viy<<"\n";
  }
  return 0;
}
// función para calular la velocidad inicial en x
double velx(int vel, int angulo) {
  double velx = vel * cos(angulo * M_PI / 180);
  std::cout << "La velocidad inicial en x es: " << velx << std::endl;
  return velx;
}
// función para calular la velocidad inicial en y
double vely(int vel, int angulo) {
  double vely = vel * sin(angulo * M_PI / 180);
  std::cout << "La velocidad inicial en y es: " << vely << std::endl;
  return vely;
}
// función para calular la posición en x
double posic_x(double vx, double const_b, double pos_ini_X, double t) {
  double posic_x = (vx / const_b) * (1 - exp(-const_b * t)) + pos_ini_X;
  return posic_x;
}
// función para calular la posición en y
double posic_y(double vy, double const_b, double pos_ini_Y, double t) {
  double posic_y =
      ((1 / const_b) * ((9.81 / const_b) + vy) * (1 - exp(-const_b * t))) -
      (9.81 * t / const_b) + pos_ini_Y;
  return posic_y;
}
// función para calular la velocidad instantanea en x
double vel_inst_x(double vx, double const_b, double t){
  double vel_inst_x=vx * exp(-const_b * t);
  return vel_inst_x;
}
// función para calular la velocidad instantanea en y
double vel_inst_y(double vy, double const_b, double t){
  double vel_inst_y=((9.81 / const_b) + vy)*(exp(-const_b * t))-(9.81/const_b);
  return vel_inst_y;
}