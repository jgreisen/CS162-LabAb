/******************************************
 ** Program Filename: summation.cpp 
 ** Author: Stephen Griffin
 ** Date: June 28, 2015
 ** Description: The Summation class function implementation file
 ******************************************/

#include "summation.hpp"

/*****************************************
 ** Function: Summation::sum
 ** Description: Accepts the elements of an array as read-only and calculates the sum
 ** Parameters: The elements of an array and the size of the array
 *****************************************/
double Summation::sum(const double *nums, int size)
{
  double total = 0.0;

  for(int i=0; i<size; i++)
    total += *(nums + i);
  
  return total;
}


 
