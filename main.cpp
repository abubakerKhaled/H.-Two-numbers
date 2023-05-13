//
// Created by baker khaled on 4/20/2023.
//

#include <iostream>
using namespace std;

int main() {
    double num1, num2;

    cin>>num1>>num2;

    double round;
    long floor, ceil;

    double division;
    division = num1 / num2;


    // floor is the smallest number 10 / 3 = 3.333 => 3
    floor = (long) division;
    cout<< "floor " << num1 << " / " << num2 << " = " << floor << endl;

    // ceil is the greatest number 10 / 3 = 3.333 => 4
    if (division == 1) {
        ceil = (long) division;
    }
    else {
        ceil = (long) division + 1;
    }
    cout<< "ceil " << num1 << " / " << num2 << " = " << ceil << endl;

    // Rounding means making a number simpler but keeping its value close to what it was.
    // The result is less accurate, but easier to use.
    // Example 10 / 3 = 3.333 => 3
    // Example 10 / 4 = 2.5 => 3
    double check;
    check = (long) division;
    check += 0.5;
    if (division < check) {
        round = floor;
    }
    else {
        round = ceil;
    }
    cout<<"round "<<num1 << " / " << num2 << " = " <<round;
}