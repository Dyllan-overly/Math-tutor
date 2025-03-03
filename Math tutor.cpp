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
    int correctAnswer = num1 + num2; 
    int userAnswer;

    std::cout << "What is " << num1 << " + " << num2 << "? ";
    std::cin >> userAnswer;

    if (userAnswer == correctAnswer) {
        cout << "Correct!" << endl;
    }
    else {
        cout << "Incorrect. The correct answer is " << correctAnswer << endl;
    }
    return 0;
// having an issue with the random number generator it keeps pumping out the same number if i debug again but changes
//when i revise the number it is allowed to pick from and recompile.
}

