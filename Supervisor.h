/**
 * @file Supervisor.h
 * @author Jace Riley
 * @date 2023-11-17
 * @brief Provides public and private members of the Supervisor class
 */

#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"

/**
 * @class Supervisor
 * @brief Represents a supervisor inheriting from the Employee class
 */
class Supervisor : public Employee {
private:
  int numSupervised; ///< Represents how many employees are supervised by a supervisor

public:
  /**
   * @brief Displays Supervisor information along with inherited Employee information in a formatted manner
   */
  void print();

  /**
   * @brief Calculates the amount of money taken home by the supervisor (including a bonus based on the number supervised)
   * @return The calculated pay amount
   */
  double calculatePay();

  /**
   * @brief Default constructor for Supervisor class
   */
  Supervisor();

  /**
   * @brief Constructor that initializes supervisor attributes
   * @param ID The unique ID of the supervisor
   * @param years The amount of years the supervisor has worked
   * @param hourlyRate The hourly rate of pay for the supervisor
   * @param hoursWorked The amount of hours worked by the supervisor for this pay period
   * @param numSupervised The number of employees supervised by the supervisor
   */
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);
};

#endif // SUPERVISOR_H
