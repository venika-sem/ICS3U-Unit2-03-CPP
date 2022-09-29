// Copyright (c) 2022 Venika Sem All rights reserved
//
// Created by: Venika Sem
// Created on: Sep 2022
// This program calculates the circumference of circle using tau

#include <cmath>
#include <iostream>

int main() {
    // this function calculates the circumference of circle using tau
    const double TAU = 6.2831853071;
    int radiusOfCircle;
    double circumferenceOfCircle;

    // input
    std::cout << "Enter radius (mm): ";
    std::cin >> radiusOfCircle;

    // process
    circumferenceOfCircle = radiusOfCircle * TAU;

    // output
    std::cout << "" << std::endl;
    std::cout << "The Circumference is " << circumferenceOfCircle;
    std::cout << " mm." << std::endl;

    std::cout << "\nDone." << std::endl;
}
