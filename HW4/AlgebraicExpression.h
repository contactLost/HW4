#pragma once
#include <string>
#include "Stack.h"
using namespace std;

class AlgebraicExpression
{
public:
	static string infix2prefix(string s);
	static double evaluatePrefix(const string exp);
};

