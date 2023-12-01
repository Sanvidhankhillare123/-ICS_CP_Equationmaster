# -ICS_CP_Equationmaster
Explaination of the code 
#include <stdio.h>: This line includes the standard input/output header file in C, which allows you to use functions like printf and scanf.
#include <math.h>: This line includes the math header file, which is used for mathematical calculations and functions.
void displayMenu(): This line declares a function named displayMenu which doesn't return any value (void).
printf("Choose an option:\n"): This line prints the message "Choose an option:" to the console.
printf("1. Solve Linear Equation\n"): This line prints the message "1. Solve Linear Equation" to the console.
printf("2. Solve Quadratic Equation\n"): This line prints the message "2. Solve Quadratic Equation" to the console.
printf("3. Solve System of Linear Equations\n"): This line prints the message "3. Solve System of Linear Equations" to the console.
printf("4. Exit\n"): This line prints the message "4. Exit" to the console.
int main(): This line declares the main function, which is the entry point of the program.
int choice;: This line declares an integer variable named choice to store the user's input.
do: This begins a do-while loop, which will execute the code block at least once and repeat as long as the condition is true.
display(): This line calls the display function, which displays the menu options to the user.
if (scanf("%d", &choice)): This line reads the user's input and stores it in the choice variable using scanf. If the input is not a valid integer, the condition will be true.
printf("error invalid input\n"): This line prints the message "error invalid input" to the console when the user enters an invalid input.
continue: This line skips the rest of the current iteration and goes back to the beginning of the do-while loop.
switch (choice): This line starts a switch statement based on the value.
// Soving Linear Equation 
float a, b;: This line declares two floating-point variables a and b. These will be used to store the coefficients of the linear equation.
 printf("enter 'a': ");: This line displays a prompt asking the user to enter the value of coefficient a.
 if (scanf("%f", &a)): This line reads the user's input for a and checks if the input was valid. If the input was not a valid floating-point number, it will return a non-zero value, and the code inside the if statement will be executed.
printf("invalid input\n");: If the input for a was invalid, this line prints a message indicating that the input was not valid.
continue;: This line is used to skip to the next iteration of the loop, ignoring the rest of the code inside the loop block.
printf("enter 'b': ");: This line displays a prompt asking the user to enter the value of coefficient b.
if (scanf("%f", &b)): This line reads the user's input for b and checks if the input was valid. If the input was not a valid floating-point number, it will return a non-zero value, and the code inside the if statement will be executed.
 printf("invalid input\n");: If the input for b was invalid, this line prints a message indicating that the input was not valid.
 continue;: This line is used to skip to the next iteration of the loop, ignoring the rest of the code inside the loop block.
 if (a == 0): This line checks if the coefficient a is equal to zero. If it is, the code inside the if statement will be executed.
if (b == 0): This line checks if the coefficient b is equal to zero. If it is, the code inside this if statement will be executed.
 printf("infinite solution\n");: If both a and b are zero, this line will be executed and it will print a message indicating that there are infinitely many solutions to the linear equation.
printf("no solution\n");: If a is not zero and b is zero, this line will be executed and it.
//Solving Quadratic Equation 
The code declares three float variables: 'a', 'b', and 'c'.
 It uses the 'printf' function to prompt the user to enter the value for 'a'.
 The 'scanf' function is used to read the user's input and store it in the variable 'a'. If the input is not a valid float value, the code prints "invalid input" and continues to the next iteration of the loop.
 The same process is repeated for 'b' and 'c', prompting the user and storing their input in the respective variables.
 The code checks if 'a' is equal to zero. If it is, it prints "not a quadratic equation".
 If 'a' is not zero, the code calculates the discriminant 's' using the formula b^2 - 4ac.
 If the discriminant 's' is greater than zero, the code calculates the two real and distinct solutions of the quadratic equation using the quadratic formula: (-b + sqrt(s)) / (2 * a) and (-b - sqrt(s)) / (2 * a).
 If the discriminant 's' is equal to zero, the code calculates the single real solution of the quadratic equation using the quadratic formula: -b / (2 * a).
 If the discriminant 's' is less than zero, the code calculates the real and imaginary parts of the complex solutions using the quadratic formula: -b / (2 * a) and sqrt(fabs(s)) / (2 * a).
Finally, the code uses the 'printf' function to display the solutions of the quadratic equation based on the calculated values.


