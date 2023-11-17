/**
 * @file Officer.cpp
 * @author Jace Riley
 * @date 2023-11-17
 * @brief Provides necessary information for Officer class and its methods
 */

#include "Officer.h"
#include <iostream>

using namespace std;

/**
 * @brief Default constructor for Officer class
 * Initializes evilness to a default value of 500
 */
Officer::Officer() {
  evilness = 500;
}

/**
 * @brief Parameterized constructor for Officer class
 * Initializes Officer object with provided values
 * @param ID The unique ID of the officer
 * @param years The amount of years the officer has worked
 * @param hourlyRate The hourly rate of pay for the officer
 * @param hoursWorked The amount of hours worked by the officer for this pay period
 * @param evilness The level of evilness of the officer
 */
Officer::Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness) : Employee(ID, years, hourlyRate, hoursWorked) {
  this->evilness = evilness;
}

/**
 * @brief Displays Officer information along with inherited Employee information in a formatted manner
 */
void Officer::print() {
  Employee::print();
  cout << " Evilness: " << evilness << endl;
}

/**
 * @brief Calculates the amount of money taken home by the officer (including evilness factor)
 * @return The calculated pay amount
 */
double Officer::calculatePay() {
  return (hourlyRate + evilness) * hoursWorked;
}
