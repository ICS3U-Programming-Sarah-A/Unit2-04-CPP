// Copyright (c) 2022 Sarah All rights reserved.
//
// Created by: Sarah
// Date: Mar 10, 2022
// This program asks the user for the diameter of the
// pizza. It then calculates and displays the total cost
// of the pizza with tax
#include <iostream>
#include <cmath>

  // declare constants
  const float HST = 0.13;
  const float LABOUR_COST = 2.00;
  const float RENTAL_COST = 2.25;
  const float INGRED_COST = 1.50;

  // declare variables
  float diameter, subtotal, tax, total, finalCost;

int main() {
  // get the diameter from the user
  std::cout << "Enter the diameter of the pizza (inches): ";
  std::cin >> diameter;

  // calculate subtotal and tax
  subtotal = LABOUR_COST + RENTAL_COST + INGRED_COST * diameter;
  tax = HST * subtotal;

  // calculate total cost
  total = subtotal + tax;
  finalCost = static_cast<int>(total * 100 + .5);
  total = finalCost / 100;

  // display final cost to user
  std::cout << "\n";
  std::cout << "The final cost is: " << total <<" \n";
}
