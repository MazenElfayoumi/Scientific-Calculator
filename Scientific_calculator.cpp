#include <iostream>
#include <stack> // using stack library
#include <string> // using strings 
#include <sstream> // allowing to read strings

using namespace std;

// functions
bool isOperator(const string& input);
void performOp(const string& input, stack<double>& calcStack);

int main()
{
	cout << "Welcome to our Scientific Calculator" << endl;

	stack <double> clacStack;
	string input;

	while (true)
	{
		// prompet
		cout << ">>";

		// input
		cin >> input;

		// check for numeric value
		double num;
		if (istringstream(input) >> num)
			clacStack.push(num);

		// check for opertor
		else if (isOperator(input))
			performOp(input, clacStack);

		// check for quit
		else if (input == "q")
			return 0;

		// invalid ouptut
		else
			cout << "Invalid Input";
	}

	return 0;
}

bool isOperator(const string& input)
{
	string ops[] = { "-", "+", "*", "/" };
	for (int i = 0; i < 4; i++)
	{
		if (input == ops[i])
			return true;
	}
	return false;
}

void performOp(const string& input, stack<double>& calcStack)
{
	double lval, rval, result;

	rval = calcStack.top();
	calcStack.pop();

	lval = calcStack.top();
	calcStack.pop();

	if (input == "-")
		result = lval - rval;
	else if (input == "+")
		result = lval + rval;
	else if (input == "*")
		result = lval * rval;
	else if (input == "/")
		result = lval / rval;

	cout << "The Result is: " << result << endl;
		calcStack.push(result);
}