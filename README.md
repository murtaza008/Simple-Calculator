# Simple-Calculator
A simple calculator which performs calculations(Addition, Subtraction, Multiplication, Division and Modulous)


I made a C++ program which performs simple calculator operations like addition, subtraction, multiplication, division and modulous.


As I have written while(true) in the starting of int main() function. It means that the code will run infinite times.


I declared variables choice, num3 and num4 in int data type because choice variable is used to input the choice of the user what kind of calculator operation he wants to perform. The num3 and num4 variables are for modulous operation because in C++ programming language you cannot perform modulous in float or double data type. That's why I declared num3 and num4 variables.


I declared variables num1 and num2 in double data type, so that the calculation can be perform in decimal numbers too.


Then I display options for operations to the user. In which the program will prompt the user that :

Press 1 to perform Addition

Press 2 to perform Subtraction

Press 3 to perform Multiplication

Press 4 to perform Division

Press 5 to perform Modulus

Press 6 to exit


Then the user will input the number


Then I applied checkers to check : 

If the user pressed 1 then addition operation will perform.

If the user pressed 2 then subtraction operation will perform.

If the user pressed 3 then the multiplication operation will perform.

If the user pressed 5 then the division operation will perform.

If the user pressed 5 then the modulous operation will perform.

If the user pressed 6 then the code will break the loop and will exit the program.

But if the user didnot input numbers between 1 and 6 then the program will display "Invalid Input" for which I applied checker in the end of the program.


In all the checkers of operations, the program will ask the user to input two numbers before performing the operation.


In division, the second number shouldnot be 0 that's why i applied checker and while loop that when user input 0 in second number of division operation the program will ask the user to enter the second number again.



In modulous, the second number shouldnot be greater than the first number that's why i applied checker and while loop that when user input second number of modulous operation greater than the first numbrt the program will ask the user to enter the numbers again.


Furthermore, I added comments in the code so that it can ease the user to understand the code more easily.
