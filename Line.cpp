#include "Line.h"

Line::Line(int l)
{
	
	length = l;
	std::cout << "Line Object is being created!\n Length = " << length << endl;
}

void Line::setLine(int l)
{
	length = l;
}

int Line::getLine()
{
	return length;
}

int Line::incrementLine(int l)
{
	std::cout << "Length will increase by 1 length\n" << endl;
	length = l + 1;

	return length;
}

void Line::displayLine(int length)
{
	for (int i = 0; i <= length; i++)
	{
		std::cout << "*";
	}
}