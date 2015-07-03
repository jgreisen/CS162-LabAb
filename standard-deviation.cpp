/****************************************************************************************
 * Program Filename: standard-deviation.cpp
 * Author: Josh Greisen
 * Date: 07/01/2015
 * Description: Purpose of this program is to calculate the standard deviation of an
 * array of double values. The calculation must make use of the average and summation
 * function written by another classmate from last weeks assignment.
 * Input: Hardcoded array of double values, number of array elements.
 * Output: Standard deviation of array values.
 * *************************************************************************************/

#include "average.hpp"
#include "summation.hpp"

#include <cmath>
#include <iostream>
#include <cfloat>

// Declare standard deviation function
double standard_deviation(const double array[], int size);

int main()
{
  std::cout.precision(6);
  
  // Create test array with values for "Simple Test Case" case
  double array1[] = {10, 20, 30, 40, 50};
  int size1 = 5;
  
  // Display test values to screen
  std::cout << "For this array of numbers {";
  for (int i = 0; i < (size1-1); i++)
  {
    std::cout << array1[i] << ", ";
  }
  std::cout << array1[(size1-1)];
  std::cout << "}" << std::endl;
  
  // Calculate standard deviation using "Simple Test Case" array
  std::cout << std::fixed << "The Standard Deviation: " << standard_deviation(array1, size1) << std::endl;
    
  
  // Create test array with values for "Small Number Edge Case" 
  double array2[] = {0.00004, 1.000003, 4.0000001, 0.19936, 0.00000000005, 0.0, 0.20, 0.00000000000000000000000001};
  int size2 = 8;
  
  // Display test values to screen
  std::cout << "For this array of numbers {";
  for (int i = 0; i < (size2-1); i++)
  {
    std::cout << array2[i] << ", ";
  }
  std::cout << array2[(size2-1)];
  std::cout << "}" << std::endl;
  
  // Calculate standard deviation using "Small Number Edge Case" array
  std::cout << std::fixed << "The Standard Deviation: " << standard_deviation(array2, size2) << std::endl;
  
  
  // Create test array with values for "Large Number Edge Case"
  double array3[] = {20000000, 50000000, 101345000000000, 202567543, 9007199254740992};
  int size3 = 5;
  
  // Display test values to screen
  std::cout << "For this array of numbers {";
  for (int i = 0; i < (size3-1); i++)
  {
    std::cout << std::fixed << array3[i] << ", ";
  }
  std::cout << array3[(size3-1)];
  std::cout << "}" << std::endl;
  
  // Calculate standard deviation using "Large Number Edge Case" array
  std::cout << std::fixed << "The Standard Deviation: " << standard_deviation(array3, size3) << std::endl;


  // Create test array with values for "Over Large Number Edge Case"
  // Commented out due to compliler error
  //double array4[] = {20000000, 50000000, 101345000000000, 202567543, 9007199254740992, 9007199254740993};
  //int size4 = 6;
  
  // Display test values to screen
  //std::cout << "For this array of numbers {";
  //for (int i = 0; i < (size4-1); i++)
  //{
  //  std::cout << array3[i] << ", ";
  //}
  //std::cout << array3[(size4-1)];
  //std::cout << "}" << std::endl;
  
  // Calculate standard deviation using "Over Large Number Edge Case" array
  //std::cout << std::fixed << "The Standard Deviation: " << standard_deviation(array4, size4) << std::endl;
}

/****************************************************************************************
 * Function: standard_deviation
 * Description: This function will calculate the standard deviation of an array of double
 * values and return it.
 * Parameters:
 * 				const double array[] - array of double values
 * 				int size - size of array
 * Pre-Conditions: 
 * 				size parameter > 0
 * 				size parameter must be equal to array size
 * 				array[] parameter must have at least one element
 * Post-Conditions: 
 * 				The standard deviation is calculated from array values and returned
 * *************************************************************************************/

double standard_deviation(const double array[], int size)
{
  // Create objects so we can access the avg and sum member functions
  // Note: This is only necessary due to provided user code implementing
  // their functions as member functions of objects.
  Average avg_object;
  Summation sum_object;
  
  // Create variables for calculation
  double stand_dev = 0.0;
  double mean = 0.0;
  double *temp_array = new double[size];
  
  // Calculate the mean of passed double array using avg() member function
  mean = avg_object.avg(array, size);
  
  // Calculate squared difference for each array element and store each 
  // value to temporary array
  for(int i=0; i<size; i++)
  {
    temp_array[i] = ((array[i] - mean) * (array[i] - mean));
  }
  
  // Finish calculating standard deviation by finding average of squared 
  // differences and then taking the square root
  stand_dev = sqrt(sum_object.sum(temp_array, size) / size);
  
  // Delete temporary array
  delete[] temp_array;
  
  return stand_dev;
}