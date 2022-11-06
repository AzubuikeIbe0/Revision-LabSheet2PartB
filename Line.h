#pragma once
#include <iostream>
using namespace std;

class Line
{
private:
	int length;

public:
	Line(int length);
	void setLine(int length);
	int getLine(void);
	int incrementLine(int length);
	void displayLine(int length);
};
