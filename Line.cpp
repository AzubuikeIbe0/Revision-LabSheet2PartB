#include "Line.h"

Line::Line(int l)
{
	length = l;
	std::cout << "Line Object is being created!\n Length = " << length << endl;
}

Line::Line(int l, int i)
{
	length = l;
	index = i;
	std::cout << "Printing line Object with 2 parameters!\n" << length << " " << index << "\n" << endl;
	for (int i = 0; i <= length; i++)
	{
		std::cout << "*";
	}
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
	std::cout << "\nPrinting DisplayLine Function" << endl;

	for (int i = 0; i <= length; i++)
	{
		std::cout << "*";
	}
}

void Line::standAloneFx1(int l)
{
	length = l;
	l = 140;
	std::cout << "Printing StandAloneFuction1" << endl;

	for (int i = 0; i <= length; i++)
	{
		std::cout << "o";
	}
}

void Line::standAloneFx2(int l)
{
	length = l;
	l = 64;
	std::cout << "Printing StandAloneFuction2" << endl;
	for (int i = 0; i <= length; i++)
	{
		std::cout << "$";
	}
}

Line::~Line()
{
	std::cout << "\nLine of length " << length << "about to go down \t" << endl;
}