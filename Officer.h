/**
 * @file Officer.h
 * @author Jace Riley
 * @date 2023-11-17
 * @brief Provides public and private members of the Officer class
 */

#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"

/**
 * @class Officer
 * @brief Represents an officer inheriting from the Employee class
 */
class Officer : public Employee {
private:
  double evilness; ///< Represents how evil the officer is

public:
  /**
   * @brief Displays Officer information along with inherited Employee information in a formatted manner
   */
  void print();

  /**
   * @brief Calculates the amount of money taken home by the officer (including evilness factor)
   * @return The calculated pay amount
   */
  double calculatePay();

  /**
   * @brief Default constructor for Officer class
   */
  Officer();

  /**
   * @brief Constructor that initializes officer attributes
   * @param ID The unique ID of the officer
   * @param years The amount of years the officer has worked
   * @param hourlyRate The hourly rate of pay for the officer
   * @param hoursWorked The amount of hours worked by the officer for this pay period
   * @param evilness The level of evilness of the officer
   */
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);
};

#endif // OFFICER_H
