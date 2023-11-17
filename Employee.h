/**
 * @file Employee.h
 * @author Jace Riley
 * @date 2023-11-17
 * @brief Provides public and private members of Employee class
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

/**
 * @class Employee
 * @brief Represents an employee with various attributes and functions
 */
class Employee {
private:
  int ID; ///< Represents the Employee's individual unique ID
  int years; ///< Represents the amount of years the employee has worked at this business

protected:
  double hourlyRate; ///< Represents the Hourly rate of pay for the employee
  float hoursWorked; ///< Represents the amount of hours worked by the employee for this pay period

public:
  /**
   * @brief Displays the employee information in a formatted manner
   */
  virtual void print();

  /**
   * @brief Calculates the amount of money taken home by the employee (not including taxes)
   * @return The calculated pay amount
   */
  virtual double calculatePay();

  /**
   * @brief Calculates the yearly raise for an employee
   */
  void anniversary();

  /**
   * @brief Default constructor for Employee class
   */
  Employee();

  /**
   * @brief Constructor that initializes employee attributes
   * @param ID The unique ID of the employee
   * @param years The amount of years the employee has worked
   * @param hourlyRate The hourly rate of pay for the employee
   * @param hoursWorked The amount of hours worked by the employee for this pay period
   */
  Employee(int ID, int years, double hourlyRate, float hoursWorked);
};

#endif // EMPLOYEE_H
