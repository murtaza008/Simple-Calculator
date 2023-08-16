#include <iostream>

using namespace std;

int main()
{
    //loop runs infinity times
    while(true)
    {
    int choice, num3, num4; // Declare variables to store user input and values for modulo operation
    double num1, num2; // Declare variables to store user input for numeric values

    // Display options for operations
    cout << "Press 1 to perform Addition" << endl;
    cout << "Press 2 to perform Subtraction" << endl;
    cout << "Press 3 to perform Multiplication" << endl;
    cout << "Press 4 to perform Division" << endl;
    cout << "Press 5 to perform Modulus" << endl;
    cout << "Press 6 to exit" << endl;

    cin >> choice;  // Read the user's choice of operation

    // Perform addition operation
    if (choice == 1)
    {
        cout << "Enter the first value : ";
        cin >> num1;
        cout << "Enter the second value : ";
        cin >> num2;
        cout << "The sum of " << num1 << " and " << num2 << " is " << num1 + num2 << endl;
    }

    // Perform subtraction operation
    if (choice == 2)
    {
        cout << "Enter the first value : ";
        cin >> num1;
        cout << "Enter the second value : ";
        cin >> num2;
        cout << "The subtraction of " << num1 << " and " << num2 << " is " << num1 - num2 << endl;
    }

    // Perform multiplication operation
    if (choice == 3)
    {
        cout << "Enter the first value : ";
        cin >> num1;
        cout << "Enter the second value : ";
        cin >> num2;
        cout << "The multiplication of " << num1 << " and " << num2 << " is " << num1 * num2 << endl;
    }

    // Perform division operation
    if (choice == 4)
    {
        cout << "Enter the first value : ";
        cin >> num1;
        cout << "Enter the second value : ";
        cin >> num2;

        // Ensure the second value is not zero
        while (num2 == 0)
        {
            cout << "In Division, Second value shouldn't be zero. Enter the second value again : ";
            cin >> num2;
        }

        cout << "The division of " << num1 << " and " << num2 << " is " << num1 / num2 << endl;
    }

    // Perform modulus operation
    if (choice == 5)
    {
        cout << "Enter the first value : ";
        cin >> num3;
        cout << "Enter the second value : ";
        cin >> num4;

        // Ensure the second value is not greater than the first value
        while (num4 > num3)
        {
            cout << "In Modulus, Second value shouldn't be greater than the first value. Enter the values again." << endl;
            cout << "Enter the first value : ";
            cin >> num3;
            cout << "Enter the second value : ";
            cin >> num4;
        }

        cout << "The modulus of " << num3 << " and " << num4 << " is " << num3 % num4 << endl;
    }

    //exit the program
    if (choice == 6)
    {
        break;
    }

    // Display an error message for invalid input
    if (choice < 1 || choice > 6)
    {
        cout << "Invalid Input" << endl;
    }
    }

    return 0;  // Return 0 to indicate successful program execution
    }
