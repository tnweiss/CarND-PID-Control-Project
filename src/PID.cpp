#include "PID.h"

/**
 * DONE: Complete the PID class. You may add any additional desired functions.
 */

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp_, double Ki_, double Kd_) {
  /**
   * DONE: Initialize PID coefficients (and errors, if needed)
   */
  this -> p_error = 0.0;
  this -> i_error = 0.0;
  this -> d_error = 0.0;
  
  this -> Kp = Kp_;
  this -> Ki = Ki_;
  this -> Kd = Kd_;
}

void PID::UpdateError(double cte) {
  /**
   * DONE: Update PID errors based on cte.
   */
  this -> d_error = cte - this -> p_error;
  
  this -> p_error = cte;
  
  this -> i_error += cte;
}

double PID::TotalError() {
  /**
   * DONE: Calculate and return the total error
   */
  return this -> p_error * this -> Kp + this -> i_error * this -> Ki + this -> d_error * this -> Kd;
}