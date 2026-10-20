/**
 * ============================================================================
 * Repository: dsa-core-engine
 * Topic     : C++ Fundamentals, Conditionals & Basic Math
 * Author    : Aryan
 * Questions : 1 to 14
 * ============================================================================
 */

#include <iostream>
#include <algorithm>
using namespace std;

// 1. Print Hello World
void q01_hello_world() {
    cout << "=== Question 1: Hello World ===" << endl;
    cout << "Hello World" << endl << endl;
}

// 2. Print the first five uppercase English letters, one per line.
void q02_first_five_uppercase() {
    cout << "=== Question 2: First 5 Uppercase Letters ===" << endl;
    cout << "A\nB\nC\nD\nE" << endl << endl;
}

// 3. Print the following descending star pattern:
// *****
// ****
// ***
// **
// *
void q03_descending_star_pattern() {
    cout << "=== Question 3: Descending Star Pattern ===" << endl;
    cout << "*****\n****\n***\n**\n*" << endl << endl;
}

// 4. Print the multiplication table of 5
void q04_table_of_5() {
    cout << "=== Question 4: Table of 5 ===" << endl;
    int a = 5;
    for (int i = 1; i <= 10; i++) {
        cout << "5 * " << i << " = " << (a * i) << endl;
    }
    cout << endl;
}

// 5. Calculate area and perimeter of a rectangle
void q05_rectangle_metrics(int length = 10, int breadth = 5) {
    cout << "=== Question 5: Rectangle Metrics (Length: " << length << ", Breadth: " << breadth << ") ===" << endl;
    int area = length * breadth;
    int perimeter = 2 * (length + breadth);
    cout << "Area = " << area << endl;
    cout << "Perimeter = " << perimeter << endl << endl;
}

// 6. Basic Arithmetic Calculator
void q06_calculator(int a = 6, int b = 4) {
    cout << "=== Question 6: Calculator (a = " << a << ", b = " << b << ") ===" << endl;
    cout << a << " + " << b << " = " << (a + b) << endl;
    cout << a << " - " << b << " = " << (a - b) << endl;
    cout << a << " * " << b << " = " << (a * b) << endl;
    cout << a << " / " << b << " = " << (a / b) << endl;
    cout << a << " % " << b << " = " << (a % b) << endl << endl;
}

// 7. Sum of the last digits of N and M
void q07_sum_of_last_digits(int N = 157, int M = 84) {
    cout << "=== Question 7: Sum of Last Digits (N = " << N << ", M = " << M << ") ===" << endl;
    int lastDigitN = N % 10;
    int lastDigitM = M % 10;
    cout << "Last digit of N (" << lastDigitN << ") + Last digit of M (" << lastDigitM << ") = "
         << (lastDigitN + lastDigitM) << endl << endl;
}

// 8. Determine whether an integer is even or odd
void q08_even_or_odd(int a = 17) {
    cout << "=== Question 8: Even or Odd (Number = " << a << ") ===" << endl;
    if (a % 2 == 0) {
        cout << a << " is Even" << endl << endl;
    } else {
        cout << a << " is Odd" << endl << endl;
    }
}

// 9. Check whether F is a factor of N (N divisible by F)
void q09_check_factor(int N = 36, int F = 6) {
    cout << "=== Question 9: Factor Check (N = " << N << ", Factor = " << F << ") ===" << endl;
    if (F != 0 && N % F == 0) {
        cout << "Result: Yes (" << F << " is a factor of " << N << ")" << endl << endl;
    } else {
        cout << "Result: No (" << F << " is not a factor of " << N << ")" << endl << endl;
    }
}

// 10. Pass or Fail check (Passing mark >= 35)
void q10_pass_or_fail(int marks = 68) {
    cout << "=== Question 10: Pass or Fail (Marks = " << marks << ") ===" << endl;
    if (marks >= 35) {
        cout << "Result: Pass" << endl << endl;
    } else {
        cout << "Result: Fail" << endl << endl;
    }
}

// 11. Find the Minimum and Maximum of two numbers
void q11_min_max_two(int A = 45, int B = 72) {
    cout << "=== Question 11: Min & Max of Two Numbers (A = " << A << ", B = " << B << ") ===" << endl;
    if (A <= B) {
        cout << "Min = " << A << endl;
        cout << "Max = " << B << endl << endl;
    } else {
        cout << "Min = " << B << endl;
        cout << "Max = " << A << endl << endl;
    }
}

// 12. Find the Minimum and Maximum among three integers
void q12_min_max_three(int a = 15, int b = 42, int c = 9) {
    cout << "=== Question 12: Min & Max of Three Numbers (A = " << a << ", B = " << b << ", C = " << c << ") ===" << endl;
    int minimum = min({a, b, c});
    int maximum = max({a, b, c});
    cout << "Min = " << minimum << endl;
    cout << "Max = " << maximum << endl << endl;
}

// 13. Student Marks Performance Message
void q13_performance_grade(int marks = 85) {
    cout << "=== Question 13: Grade Evaluation (Marks = " << marks << ") ===" << endl;
    if (marks > 90) {
        cout << "Grade: Excellent" << endl << endl;
    } else if (marks > 80) {
        cout << "Grade: Good" << endl << endl;
    } else if (marks > 70) {
        cout << "Grade: Fair" << endl << endl;
    } else if (marks > 60) {
        cout << "Grade: Meets Expectations" << endl << endl;
    } else {
        cout << "Grade: Below Par" << endl << endl;
    }
}

// 14. Determine Cartesian plane location of (X, Y)
void q14_cartesian_location(int X = -4, int Y = 7) {
    cout << "=== Question 14: Cartesian Plane Point (" << X << ", " << Y << ") ===" << endl;
    if (X == 0 && Y == 0) {
        cout << "Location: Origin" << endl << endl;
    } else if (Y == 0) {
        cout << "Location: X axis" << endl << endl;
    } else if (X == 0) {
        cout << "Location: Y axis" << endl << endl;
    } else if (X > 0 && Y > 0) {
        cout << "Location: 1st Quadrant" << endl << endl;
    } else if (X < 0 && Y > 0) {
        cout << "Location: 2nd Quadrant" << endl << endl;
    } else if (X < 0 && Y < 0) {
        cout << "Location: 3rd Quadrant" << endl << endl;
    } else {
        cout << "Location: 4th Quadrant" << endl << endl;
    }
}

// Unified Runner Entrypoint
int main() {
    cout << "=====================================================" << endl;
    cout << "   DSA CORE ENGINE - C++ PRACTICE SHEET (1 TO 14)    " << endl;
    cout << "=====================================================" << endl << endl;

    q01_hello_world();
    q02_first_five_uppercase();
    q03_descending_star_pattern();
    q04_table_of_5();
    q05_rectangle_metrics(10, 5);
    q06_calculator(6, 4);
    q07_sum_of_last_digits(157, 84);
    q08_even_or_odd(17);
    q09_check_factor(36, 6);
    q10_pass_or_fail(68);
    q11_min_max_two(45, 72);
    q12_min_max_three(15, 42, 9);
    q13_performance_grade(85);
    q14_cartesian_location(-4, 7);

    cout << "=====================================================" << endl;
    cout << "       ALL 14 PRACTICE DRILLS EXECUTED CLEANLY       " << endl;
    cout << "=====================================================" << endl;

    return 0;
}