/************************************
 ** Program Filename: average.cpp
 ** Author: Stephen Griffin
 ** Date: June 28, 2016
 ** Description: The Average class function implementation file
 ************************************/ 

#include "average.hpp"


/***********************************
 ** Function: Average::avg()
 ** Description: Accepts the elements of an array as read-only and calculates the average
 ** Parameters: The elements of the array and the size of the array
 ***********************************/
double Average::avg(const double *nums, int size)
{
  double total = 0.0;
  double average;

  for(int i=0; i<size; i++)
   total += *(nums + i);
  
  average = total / size;
  
  return average;
}

