/**
 * @file Supervisor.h
 * @author Jace Riley
 * @date 2023-11-17
 * @brief Provides public and private members of Supervisor class
*/

#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"

class Supervisor : public Employee {

 private:

  int numSupervised; // Represent how many employees under a supervisor
 
 public:
  
  void print(); // Prints neccessary information of each supervisor
  
  double calculatePay(); // Calculates the supervisors pay based on employees' pay under that supervisor and amount of employees under the supervisor
  
  Supervisor(); // Constructor
  
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised); // Simplifies ability to add and remove supervisors by initializing the pointer
};

#endif //SUPERVISOR_H