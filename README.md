# Scientific Calculator

This project is a C++ implementation of a basic Scientific Calculator. The calculator can perform arithmetic operations such as addition, subtraction, multiplication, and division using a stack-based approach. This project also demonstrates the use of Object-Oriented Programming (OOP) techniques to structure the calculator's functionality.

## Features:
- **Basic Arithmetic Operations**: Supports addition (`+`), subtraction (`-`), multiplication (`*`), and division (`/`).
- **Stack-Based Calculation**: Utilizes a stack to store and manage operands during calculations.
- **Interactive Console**: Users can input numbers and operators interactively, with results displayed after each operation.
- **Quit Option**: Type `q` to exit the calculator.

## OOP Techniques Used:
- **Encapsulation**: The core operations are encapsulated within functions, ensuring that the logic for checking operators and performing calculations is well-organized.
- **Stack Data Structure**: The `stack` class from the C++ Standard Library is used to manage the operands, demonstrating how to leverage OOP and existing data structures.
- **Modular Functions**:
  - **`isOperator` Function**: Determines if the input string is a valid operator.
  - **`performOp` Function**: Performs the arithmetic operation on the top two elements of the stack and pushes the result back onto the stack.

## How to Use:
1. Run the program.
2. Enter numbers and operators as prompted.
3. The calculator will output the result after each operation.
4. To quit the calculator, enter `q`.

## Example Usage:
5 3 + The Result is: 8 2 * The Result is: 16 q

## Getting Started:
- Compile and run the program using a C++ compiler.
- The program runs in the console, accepting input interactively.

## Additional Information:
- This project showcases a simple use of OOP principles to build a stack-based calculator.
- The program is designed to be extended easily with additional operators or functions by modifying the `isOperator` and `performOp` functions.
