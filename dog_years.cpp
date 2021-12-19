/*
A one-year-old dog is 10.5 years old in human years, 
and a two-year-old dog is 21 years old in human years.

The first two years of a dog’s life count as 21 human years.
Each following year counts as 4 human years.

This project involves writing a C++ program called dog_years.cpp to 
calculate the age, in human years, of any dog older than 2.
*/

#include <iostream>

int main() {
  // Declare a variable and set it equal to your dog's age
  int dog_age = 5;
  
  int early_years;
  int later_years;
  int human_years;
  
  // The first two years 
  early_years = 21;
  
  // The following years
  later_years = (dog_age - 2) * 4;
  
  // Dog's age in human years
  human_years = early_years + later_years;
  
  std::cout << "My name is Odie! Ruff ruff, I am " << human_years << " years old in human years.";

}
