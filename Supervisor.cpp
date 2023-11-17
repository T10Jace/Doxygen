/**
 * @file Supervisor.cpp
 * @author Jace Riley
 * @date 2023-11-17
 * @brief Provides necessary information for the Supervisor class and its methods
 */

#include "Supervisor.h"
#include <iostream>

using namespace std;

/**
 * @brief Default constructor for Supervisor class
 * Initializes numSupervised to a default value of -1
 */
Supervisor::Supervisor() {
  numSupervised = -1;
}

/**
 * @brief Parameterized constructor for Supervisor class
 * Initializes Supervisor object with provided values
 * @param ID The unique ID of the supervisor
 * @param years The amount of years the supervisor has worked
 * @param hourlyRate The hourly rate of pay for the supervisor
 * @param hoursWorked The amount of hours worked by the supervisor for this pay period
 * @param numSupervised The number of employees supervised by the supervisor
 */
Supervisor::Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised) : Employee(ID, years, hourlyRate, hoursWorked) {
  this->numSupervised = numSupervised;
}

/**
 * @brief Displays Supervisor information along with inherited Employee information in a formatted manner
 */
void Supervisor::print() {
  Employee::print();
  cout << " Number Supervised: " << numSupervised << endl;
}

/**
 * @brief Calculates the amount of money taken home by the supervisor (including a bonus based on the number supervised)
 * @return The calculated pay amount
 */
double Supervisor::calculatePay() {
  double val = Employee::calculatePay();
  val = val + val * (.01 * numSupervised); // Assuming a 1% bonus per supervised employee
  return val;
}
