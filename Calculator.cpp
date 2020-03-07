#include "Calculator.h"

double Calculator::Calculate(double x, char oper, double y)
{
	switch (oper)
	{
	case '+':
		return x + y;
	case '-':
		return x - y;
	case '*':
		return x * y;
	case '/':
		return x / y;
	default:
		return 0.0;
	}
}

//calculate function takes two numbers and operator, above acts to chose operation
//switch reads operator, picks case based solely on operator
//double allows for number that supports decimals
//calculate function must return double too, hence default of 0.0
//