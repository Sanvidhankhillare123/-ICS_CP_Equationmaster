# -ICS_CP_Equationmaster
**Equation Solver Program**
C program is designed to solve three types of mathematical equations: linear equations, quadratic equations, and systems of linear equations. The user interacts with the program by choosing the type of equation they want to solve, entering the required coefficients, and obtaining the solution(s).
Usage Instructions:

**1.Menu:**
The program displays a menu with three options:
1. Linear Equation.
2. Quadratic Equation.
3. System of Linear Equations.
   
**2.User Input:**
The user is prompted to enter a number corresponding to the type of equation they want to solve (num).
Based on the user's choice, the program prompts the user to enter the coefficients of the selected equation.

**3.Equation Solving:**
The program utilizes three functions for solving different types of equations:
linearequation: Solves a linear equation of the form ax + b = 0.
quadraticequation: Solves a quadratic equation of the form ax^2 + bx + c = 0.
linearsystem: Solves a system of two linear equations:
a1*x + b1*y = c1
a2*x + b2*y = c2

**4.Output:**
The program provides solutions based on the nature of the equations:
For linear equations, it outputs the value of x.
For quadratic equations, it outputs real or complex solutions (x1, x2).
For systems of linear equations, it outputs the values of x and y.

CODE STRUCTURE : 
**1.Main Function (main):**

Displays the menu and prompts the user for input.
Uses a switch statement to determine the type of equation selected.
Calls the corresponding solving function based on the user's choice.

**Linear Equation Function (linearequation):**
Checks if the equation is linear (a != 0).
Calculates and prints the solution for the variable x.

**Quadratic Equation Function (quadraticequation):**
Calculates the discriminant to determine the nature of solutions.
Prints real or complex solutions accordingly.

**Linear System Function (linearsystem):**
Calculates the determinant to check for the uniqueness of the solution.
Prints the values of x and y for a unique solution.

**Input Requirements:**
Users are expected to input valid numerical coefficients for the equations.
The program assumes that users understand the type of equation they are trying to solve

**Limitations:**
The program may not handle cases where coefficients are not valid numerical inputs.
It does not provide functionality for higher-order equations or more than two linear equations in a system.

**Usage Example:**
User selects option 2 for solving a quadratic equation.
Program prompts for coefficients a, b, and c.
User inputs 1, 2, 1 for the quadratic equation x^2 + 2x + 1 = 0.
Program calculates and outputs the solutions (x1, x2) as -1.

**Build and Run:**
The program can be compiled using a C compiler, such as GCC: gcc filename.c -o equationsolver.
Run the executable: ./equationsolver.



