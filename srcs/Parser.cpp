#include "Parser.h"

Parser::Parser()
{

}

int Parser::getFunction()
{
	int number;
	std::cout << std::endl << "Function ? ";
	std::cin >> number;
	return number;
}

int Parser::getNumber(const int &nb)
{
	int number;
	std::cout << "Number " << nb << " ? ";
	std::cin >> number;
	return number;
}
