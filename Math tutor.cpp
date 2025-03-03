/* Program file name: Math tutor
 Programmer: Dyllan Overly
 Date: February 2025
 Requirements: have 2 random numbers added and produce the solution, then make a branch to allow the user to answer
 before the solution is given and tell them whether they are correct or incorrect.
*/

#include <iostream>
using namespace std;
int main()
{
    double num1 = (1 + (rand() % 500));
    double num2 = (1 + (rand() % 500));
    double sum = num1 + num2; 
    cout << "The sum of " << num1 << " and " << num2 << " is " << sum << endl;
    return 0;
}

