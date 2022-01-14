// Copyright (c) 2022 Abdul basit All rights reserved.
//
// Created by: Abdul basit
// Created on: Jan 2022
// This program accept marks and calculates the average

#include <iostream>
#include <list>
#include <cmath>


float AverageCalculator(std::list<float> listOfMarks) {
    // this functions calculates the average

    float average = 0;
    int intProcess;
    float roundedAverage;

    for (float singleElement : listOfMarks) {
        average = average + singleElement;
    }

    average = average/listOfMarks.size();

    roundedAverage = (average*pow(10, 0));
    intProcess = (int(roundedAverage + 0.5));
    roundedAverage = intProcess *pow(10, -0);

    return roundedAverage;
}


main() {
    // this function uses a list

    std::list<float> markList;
    std::string singleMark;
    float intSingleMark;
    float average;

    std::cout << "Please enter 1 mark at a time. Enter -1 to end."
              << "\n" << std::endl;

    // input
    while (singleMark != "-1") {
        std::cout << "What is your mark? (as %): ";
        std::cin >> singleMark;
        try {
            intSingleMark = std::stoi(singleMark.c_str());

            markList.push_back(intSingleMark);
        } catch (std::invalid_argument) {
            std::cout << "Please enter in a number" << std::endl;
        }
    }
    markList.pop_back();


    std::cout << " " << std::endl;
    // call functions
    average = AverageCalculator(markList);
    // output
    std::cout << "Your average is: " << average << "%" << std::endl;
    std::cout << "\nDone." << std::endl;
}
