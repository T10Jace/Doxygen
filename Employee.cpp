/**
 * @file Employee.cpp
 * @author Jace Riley
 * @date 2023-11-17
 * @brief Contains implementations of Employee class methods
 */

#include "Employee.h"
#include <iostream>

using namespace std;

/**
 * @brief Default constructor for Employee class
 * Initialize all attributes to -1
 */
Employee::Employee() {
  ID = years = hoursWorked = hourlyRate = -1;
}

/**
 * @brief Constructor for Employee class with parameterized values
 * @param ID The unique ID of the employee
 * @param years The amount of years the employee has worked
 * @param hourlyRate The hourly rate of pay for the employee
 * @param hoursWorked The amount of hours worked by the employee for this pay period
 */
Employee::Employee(int ID, int years, double hourlyRate, float hoursWorked) {
  this->ID = ID;
  this->years = years;
  this->hourlyRate = hourlyRate;
  this->hoursWorked = hoursWorked;
}

/**
 * @brief Displays the employee information in a formatted manner
 */
void Employee::print() {
  cout << "Printing information for employee " << ID << ":\n Years Employed: " << years
       << "\n Hourly Rate: " << hourlyRate << "\n Hours Worked: " << hoursWorked
       << endl;
}

/**
 * @brief Handles the yearly anniversary for an employee
 * Increases years worked by 1 and adjusts hourly rate based on a raise formula
 */
void Employee::anniversary() {
  years++;
  hourlyRate = hourlyRate + hourlyRate * .002; // Assuming a 0.2% raise for each year
  cout << "Congratulations to employee " << ID << " on " << years << " year(s) at the company!"
       << endl;
}

/**
 * @brief Calculates the amount of money taken home by the employee (not including taxes)
 * @return The calculated pay amount
 */
double Employee::calculatePay() {
  return hourlyRate * hoursWorked;
}
