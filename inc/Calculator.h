#ifndef _CALCULATOR_H_
# define _CALCULATOR_H_

# include "Parser.h"

class Calculator
{
public:
	Calculator();
	int run();
private:
	Parser *parser;
	bool status;
	int (Calculator::*fptrs[4]) (const int&, const int&);

	int addition(const int&, const int&);
	int substraction(const int&, const int&);
	int multiplication(const int&, const int&);
	int division(const int&, const int&);
};

#endif /* _CALCULATOR_H_ */
