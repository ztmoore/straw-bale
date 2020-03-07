#pragma once
class Calculator
{
public:
	double Calculate(double x, char oper, double y); 
	//declares function "calculate" will use to run math operations
	// header .h files, source .cpp files
	//some typical file extensions, functions and vars usually declared in header file
	//then implemented/defined in source files. can use #include "filename.h" to access code (functions/vars) in header files
	//
};

//calculate declares in the () what is expect as input, and the format
//this is called declaring the function "prototype" tells compiler what format to expect
//input order is x value, operator, y value
//values are double type, operator is a character