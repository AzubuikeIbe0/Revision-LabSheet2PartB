#pragma once
#include <iostream>
using namespace std;

class Line
{
private:
	int length;
	int index;
public:
	Line(int length);
	Line(int length, int index);
	void setLine(int length);
	int getLine(void);
	int incrementLine(int length);
	void displayLine(int length);
	void standAloneFx1(int length);
	void standAloneFx2(int length);
	~Line();
};
