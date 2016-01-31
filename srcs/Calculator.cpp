#include "Calculator.h"

Calculator::Calculator()
{
	this->parser = new Parser();
	this->status = true;

	this->fptrs[0] = &Calculator::addition;
	this->fptrs[1] = &Calculator::multiplication;
	this->fptrs[2] = &Calculator::substraction;
	this->fptrs[3] = &Calculator::division;
}

int Calculator::run()
{
	std::cout << "Welcome to my Terminal Calculator in C++" << std::endl;
	std::cout << "Available functions are : " << std::endl
	<< "1: Addition" << std::endl
	<< "2: Multiplication" << std::endl
	<< "3: Substraction" << std::endl
	<< "4: Division" << std::endl;
	while (this->status)
	{
		int func = this->parser->getFunction();
		int nb1 = this->parser->getNumber(1);
		int nb2 = this->parser->getNumber(2);
		(this->*this->fptrs[func - 1])(nb1, nb2);
	}
	return (0);
}

int Calculator::addition(const int &nb1, const int &nb2)
{
	std::cout << "It is an addition and the result is " << nb1 + nb2 << "." << std::endl;
	return nb1 + nb2;
}

int Calculator::substraction(const int &nb1, const int &nb2)
{
	std::cout << "It is a substraction and the result is " << nb1 - nb2 << "." << std::endl;
	return nb1 - nb2;
}

int Calculator::multiplication(const int &nb1, const int &nb2)
{
	std::cout << "It is a multiplication and the result is " << nb1 * nb2 << "." << std::endl;
	return nb1 * nb2;
}

int Calculator::division(const int &nb1, const int &nb2)
{
	std::cout << "It is a division and the result is " << nb1 / nb2 << "." << std::endl;
	return nb1 / nb2;
}
