/**
 * @file Employee.h
 * @author Jace Riley
 * @date 2023-11-17
 * @brief Provides public and private members of Employee class
*/

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee {
 
 private:
  
  int ID; // Represents the Employee's individual unique ID
  
  int years; // Represent the amount of years the employee has worked at this business
  
 
 protected:
  
  double hourlyRate; // Represents the Hourly rate of pay for the employee
  
  float hoursWorked; // Represnts the amount of hours worked by the employee for this pay period
 
 
 public:
  
  virtual void print(); // Displays the employees in a formatted manner
  
  virtual double calculatePay(); // Calculates the amount of money taken home by the employee (not including taxes) 
  
  void anniversary(); // Formula that calculates the yearly raise for an employee
  
  Employee(); // Constructor
  
  Employee(int ID, int years, double hourlyRate, float hoursWorked); // Simplifies ability to add and remove employees by initializing the pointer
};

#endif //EMPLOYEE_H