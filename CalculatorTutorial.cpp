// CalculatorTutorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> //allows for referencing code from external files, here <> typically denotes C++ S.L. content. Quotes usually means other sources
#include "Calculator.h"

using namespace std; //tells compiler to expect C++ standard library content

int main()
{
    //give variables initial values
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';

    cout << "Calculator Console Application" << endl << endl;
    // cout used to print to C++ standard output << tells compiler that what is to the right goes to standard output
    // endl like an "enter key" can use \n inside string like matlab to start new line instead. preferred to endl
    // Cpp pstatements must end with ; and contain main() function
    cout << "Please enter the operation to perform: a+b | a-b | a*b | a/b"
        << endl;

    Calculator c;
    while (true)
    {
        cin >> x >> oper >> y;
        if (oper == '/' && y == 0)
        {
            cout << "Division by 0 exception" << endl;
            continue;
        }
        else
        {
            result = c.Calculate(x, oper, y);
        }
      
        cout << "Answer: " << result << endl;
    }


    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
