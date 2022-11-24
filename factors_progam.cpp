// Copyright (c) 2022 Joanne Santhosh All rights reserved

// Created by: Joanne Santhosh
// Created on: Nov 2022
// This program finds the factors
// code reference URL: https://www.faceprep.in/c/find-factors-of-a-number-in-c-c-java-and-python-faceprep/

#include <iostream>

int main() {
    int num;
    cout << “\nEnter the number : “;
    cin >> num;
    int i, count = 0;
    cout << “\nThe factors of ” << num << ” are : “;
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            ++count;
            cout << i << ” “;
        }
    }
    cout << “\n\nTotal factors of ” << num << “: ” << count << endl;
    return 0;
}
