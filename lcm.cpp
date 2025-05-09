// Copyright (c) 2025 Amara Tie All rights reserved.
//
// Created by: Amara Tie
// Date: May 8, 2025
// This is a program calculates the LCM of 3 numbers !

#include <cmath>
#include <iostream>
#include <string>

// Initialize counter, function, and calculate the remainder.
int lcm(int number_1, int number_2, int number_3) {
    int counter = 1;
    while (true) {
        counter += 1;
        if (
            counter % number_1 == 0 &&
            counter % number_2 == 0 &&
            counter % number_3 == 0) {
            return counter;
        }
    }
}
int main() {
    // Greeting.
    std::cout << "Hello! Let's find the LCM, remainder and multiples of 3 numbers!"
              << std::endl;

    // Ask User for a number.
    string user1_as_string;
    string user2_as_string;
    string user3_as_string;

    float user1_as_number;
    float user2_as_number;
    float user3_as_number;
