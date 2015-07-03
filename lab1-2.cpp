/****************************************************************************************
 * Program Filename: lab1-2.cpp
 * Author: Josh Greisen
 * Date: 06/28/2015
 * Description: Purpose of this program is to demonstrate how to define, declare and call
 * functions using sepearte files for each function as well has seperate header files for
 * each function definition.
 * Input: None
 * Output: Sum of hard coded array values. 
 * *************************************************************************************/

#include <iostream>
#include <cfloat>

#include "average.hpp"
#include "summation.hpp"

int main()
{
  // Create new Sum object
  Summation sum_object;
  
  double array1[] = {10, 20, 30, 40, 50};
  int size = 5;
  
  std::cout << "For this array of numbers {";
  for (int i = 0; i < (size-1); i++)
  {
    std::cout << array1[i] << ", ";
  }
  std::cout << array1[(size-1)];
  std::cout << "}" << std::endl;
  
  std::cout << "The Sum: " << sum_object.sum(array1, size) << std::endl;
 
  
  double array2[] = {0.00004, 1.000003, 4.0000001, 0.19936, 0.00000000005, 0.0, 0.20, 0.00000000000000000000000001};
  size = 8;
  
  std::cout << "For this array of numbers {";
  for (int i = 0; i < (size-1); i++)
  {
    std::cout << std::fixed << array2[i] << ", ";
  }
  std::cout << array2[(size-1)];
  std::cout << "}" << std::endl;
  
  std::cout << std::fixed << "The Sum: " << sum_object.sum(array2, size) << std::endl;
  
  
  double array3[] = {20000000, 50000000, 101345000000000, 202567543, 9007199254740992};
  size = 5;
  
  std::cout << "For this array of numbers {";
  for (int i = 0; i < (size-1); i++)
  {
    std::cout << std::fixed << array3[i] << ", ";
  }
  std::cout << array3[(size-1)];
  std::cout << "}" << std::endl;
  
  std::cout << std::fixed << "The Sum: " << sum_object.sum(array3, size) << std::endl;
  
  return 0;
}