// sam01.cpp :  Basic C++ program       01 Jan 2022
// Sample code for Lecture 1
// Demonstrates:
// Basic program structure:
// main() function, declaring variables, output to console (screen)
// declaring and calling functions:  add(), average()
// declaring function prototypes
// dealing with the "std" namespace

// Include the Input-Output-Stream header from the Standard Library
#include <iostream>

// Function Prototypes declare the signature of a method.
// Functions must be declared before they are called.

int add(int, int);  // signature of add() function declares return and parameter types
double average(int, int);

int main()
{
    std::cout << "C++ Basics\n";  // standard namespace :: console output, insertion operator<<

    int a = 2;
    int b = 3;
    int sum;

    sum = add(a, b);    // function call with two arguments, returning int

    std::cout << "sum = " << sum << std::endl;   // endl = "end-line"

    double avg;
    avg = average(a, b);
    std::cout << "average = " << avg << std::endl;

    //TODO Questions
    /*
        Q.1
        Write a separate function called add( ) that will accept three int values
        and return their sum.
        Call the function from main() and output the result returned.
        Remember to put the Function Prototype for your function with the other prototypes.
        Is this an overloaded function? What is an overloaded function?

        Q.2
        Write a function average() that will take three values
        of type double and return their average from main.
    */


    // ***********  Dealing with the standard Namespace  ****************
    // Typing the namespace qualifier "std::" before everything from
    // the standard library becomes tedious and makes code more difficult
    // to read for beginners.
    // Therefore, we will insert "using namespace std;" at the top of
    // our program files to avoid having to qualify each object with "std::"
    // However, there are advantages to not doing this, which we may
    // explore later.
    // *****************************************************************
}

//  add()
//  accepts two parameters x and y, of type int, and
//  returns a value of type int
//
int add(int x, int y) {
    return x + y;
}

//  average()
//  accepts two parameters, x an int, and b, an int
//  returns the average of the arguments as type double
//
double average(int x, int b) {
    return (static_cast<double>(x) + b) / 2; // cast x to type double , otherwise we get integer division
}

