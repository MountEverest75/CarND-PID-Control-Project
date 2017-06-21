#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
  this->Kp = Kp;
  this->Ki = Ki;
  this->Kd = Kd;
}

void PID::UpdateError(double cte) {
  diff_cte = cte - prev_cte;
  prev_cte = cte;
  int_cte += cte;
}

double PID::TotalError() {
  return -Kp * prev_cte - Kd * diff_cte - Ki * int_cte;
}
