/**
 * @file Officer.h
 * @author Jace Riley
 * @date 2023-11-17
 * @brief Provides public and private members of Officer class
*/

#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"

class Officer : public Employee {
 
 private:
  
  double evilness; // Represents how evil the officer is
 
 
 public:

  void print(); // Prints the necessary information of each Officer
  
  double calculatePay(); // Calculates the pay of each Officer bases on their individual evilness, hourly pay, and hours worked
  
  Officer(); // Constructor
  
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness); // // Simplifies ability to add and remove Officers by initializing the pointer
};

#endif //OFFICER_H