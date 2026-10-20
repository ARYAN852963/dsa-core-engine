#include <iostream>
using namespace std;

// 1. Print Hello World
void question1() {
    cout << "--- Question 1: Hello World ---" << endl;
    cout << "Hello World" << endl << endl;
}

// 2. Print the first five uppercase English letters, one per line.
void question2() {
    cout << "--- Question 2: First 5 Uppercase Letters ---" << endl;
    cout << "A" << endl;
    cout << "B" << endl;
    cout << "C" << endl;
    cout << "D" << endl;
    cout << "E" << endl << endl;
}

// 3. Print the following descending star pattern:
// *****
// ****
// ***
// **
// *
void question3() {
    cout << "--- Question 3: Descending Star Pattern ---" << endl;
    cout << "*****" << endl;
    cout << "****" << endl;
    cout << "***" << endl;
    cout << "**" << endl;
    cout << "*" << endl << endl;
}

// 4. Print the multiplication table of 5
void question4() {
    cout << "--- Question 4: Table of 5 ---" << endl;
    int a = 5;
    for (int i = 1; i <= 10; i++) {
        cout << "5 * " << i << " = " << a * i << endl;
    }
    cout << endl;
}

// 5. Calculate area and perimeter of a rectangle (length = 10, breadth = 5)
void question5() {
    cout << "--- Question 5: Rectangle Area and Perimeter ---" << endl;
    int length = 10;
    int breadth = 5;

    cout << "Length: " << length << ", Breadth: " << breadth << endl;
    cout << "Area = " << length * breadth << endl;
    cout << "Perimeter = " << 2 * (length + breadth) << endl << endl;
}

// 6. Basic Arithmetic Calculator (a = 6, b = 4)
void question6() {
    cout << "--- Question 6: Calculator ---" << endl;
    int a = 6;
    int b = 4;

    cout << "Inputs: a = " << a << ", b = " << b << endl;
    cout << "6 + 4 = " << a + b << endl;
    cout << "6 - 4 = " << a - b << endl;
    cout << "6 * 4 = " << a * b << endl;
    cout << "6 / 4 = " << a / b << endl;
    cout << "6 % 4 = " << a % b << endl << endl;
}

int main() {
    question1();
    question2();
    question3();
    question4();
    question5();
    question6();

    return 0;
}
