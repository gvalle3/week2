/*
W15664768 CS110B Extended Calculator;
program with self created math operators,
loop to offer new calculation,
ERROR: Saves math operator
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;
int main()
{
    int mathOp; // selected math operator
    bool menuChoice = true; // for do while loop to verify proper choice
    bool keepGoing = true;
    string mathOP;
    float num1, num2, answer;
    cout << "*****************************************" << endl;
    cout << "\nWelcome to Lupe's Calculator! \n";
    cout << "These are your available math operators: " << endl;
    while (keepGoing == true)
    {
        cout << "\n1. to add" << "      " << "2. to subtract" << endl;
        cout << "3. to multiply" << " " << "4. to divide" << endl;
        cout << "5. to square" << "   " << "6. to square root" << endl;
        cout << "7. to cube" << "     " << "8. to cube root" << endl;
        cout << "9. to power " << "  " << endl;
        while (menuChoice == true)
        {
            cout << "Input math operator: " ;
            cin >> mathOp;
            mathOp = mathOp;
            if (mathOp <= 9)
               menuChoice = false;
        }

        cout << "Now input 2 numbers to calculate \n*input 0 and second number if not needed: ";
        cin >> num1;
        cin >> num2;

        switch (mathOp)
        {
            case (1):
                mathOP = " + ";
                answer = num1 + num2;
                cout << num1 << mathOP << num2 << " = " << answer << endl; 
                break;
            case (2):
                mathOP = " - ";
                answer = num1 - num2;
                cout << num1 << mathOP << num2 << " = " << answer << endl;
                break;
            case (3):
                mathOP = " * ";
                answer = num1 * num2;
                cout << num1 << mathOP << num2 << " = " << answer << endl;
                break;
            case (4):
                mathOP = " / ";
                answer = num1 / num2;
                cout << num1 << mathOP << num2 << " = " << answer << endl;
                break;
            case (5):
                mathOP = " ^2 ";
                answer = num1 * num1;
                cout << num1 << mathOP << " = " << answer << endl;
                break;
            case (6):
                mathOP = " ^1/2 ";
                answer = sqrt(num1);
                cout << num1 << mathOP << " = " << answer << endl;
                break;
            case (7):
                mathOP = "^3";
                answer = num1 * num1 * num1;
                cout << num1 << mathOP << " = " << answer << endl;
                break;
            case (8):
                mathOP = "^1/3";
                answer = cbrt(num1);
                cout << num1 << mathOP << " = " << answer << endl;
                break;
            case (9):
                mathOP = " ^ ";
                answer = pow(num1,num2);
                cout << num1 << mathOP << num2 << " = " << answer << endl;
                break;
        }
        char keep;
        cout << "Keep going...? (Y/N) : " ;
        cin >> keep;
        if (keep == 'Y' || keep == 'y')
        {
            keepGoing = true;
            menuChoice = true;
            
            cout << "*****************************************" << endl;
        }
        if (keep == 'N' || keep == 'n')
            keepGoing = false;
    }
    return 0;
}

/*
Guadalupes-MacBook-Pro:CS110B Hubert$ g++ hwClass2.cc
Guadalupes-MacBook-Pro:CS110B Hubert$ ./a.out
*****************************************

Welcome to Lupe's Calculator! 
These are your available math operators: 

1. to add      2. to subtract
3. to multiply 4. to divide
5. to square   6. to square root
7. to cube     8. to cube root
9. to power   
Input math operator: 5
Now input 2 numbers to calculate 
*input 0 and second number if not needed: 4 0
4 ^2  = 16
Keep going...? (Y/N) : y
*****************************************

1. to add      2. to subtract
3. to multiply 4. to divide
5. to square   6. to square root
7. to cube     8. to cube root
9. to power   
Input math operator: 1
Now input 2 numbers to calculate 
*input 0 and second number if not needed: 4 5
4 + 5 = 9
Keep going...? (Y/N) : y
*****************************************

1. to add      2. to subtract
3. to multiply 4. to divide
5. to square   6. to square root
7. to cube     8. to cube root
9. to power   
Input math operator: 3
Now input 2 numbers to calculate 
*input 0 and second number if not needed: 5 6
5 * 6 = 30
Keep going...? (Y/N) : n
Guadalupes-MacBook-Pro:CS110B Hubert$ 
*/