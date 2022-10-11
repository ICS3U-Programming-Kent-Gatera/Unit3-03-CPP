// Copyright (c) 2022 Immaculata HS All rights reserved.
// Created by: Kent Gatera
// Created on: Oct 2022
// This program checks if a user's guess is correct.

#include <random>
#include <iostream>

int main() {
    // declaring the constant for the number the user has to guess

    int userGuess;
    int someRandomNumber;
    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0, 9);
    someRandomNumber = idist(rgen);

    // input, get the guess from the user
    std::cout << "Guess a number: ";
    std::cin >> userGuess;
    std::cout << "" << std::endl;

    // process, check if the user's guess matches the number
    // output string if statement is true
    // process, check if the user's guess does not match the number
    // output string if statement is true

    if (userGuess == someRandomNumber) {
        std::cout << "Your guess is correct!";
    } else {
        std::cout << "Your guess is wrong!";
        std::cout << " It was ";
        std::cout << someRandomNumber;}
}
