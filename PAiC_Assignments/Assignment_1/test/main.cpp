/*
 * File: PerfectNumbers.cpp
 * ------------------------
 * Name: Ni Weifeng
 * This program tests the isPerfect function by generating all the
 * perfect numbers up to some user-specified upper bound.
 * Data Science and Big Data Technology Class 2
 * 2024110089
 */

#include <iostream>


using namespace std;

/* Function prototypes */

bool isPerfect(int n);

/* Main program */


int main() {
    cout << string(1, 103);
    return 0;
}

/*
 * Function: isPerfect
 * Usage: if (isPerfect(n)) . . .
 * ------------------------------
 * This function returns true if n is a perfect number.
 */

bool isPerfect(int n) {
    int sum_factors = 0;

    for (int i = 1; i < n; i++){
        if (n % i == 0)
            sum_factors += i;
    }
    if (sum_factors != n)
        return false;

    return true;
}

