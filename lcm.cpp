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

    std::cout << "Enter the first number :";
    std::cin >> user1_as_string;
    std::cout << "Enter a second number :";
    std::cin >> user2_as_string;
    std::cout << "Enter a third number :";
    std::cin >> user3_as_string;
    std::cout << endl;

    // Try to convert a string to int.
    try {
        user1_as_number = round(stof(user1_as_string));
        try {
            user2_as_number = round(stof(user2_as_string));
            try {
                user3_as_number = round(stof(user3_as_string));

                // Check if the number is positive.
                if (user1_as_number > 0) {
                    if (user2_as_number > 0 && user3_as_number > 0) {
                    // Calculate the LCM.
                    int answer = lcm(user1_as_number,

                                     user2_as_number,
                                     user3_as_number);
                    std::cout << "The LCM of "
                              << user1_as_number << ", "
                              << user2_as_number << " and "
                              << user3_as_number << " is "
                              << answer << std::endl;

    // Check if LCM is divisible by two
    // or has a remainder of 1.
