#include "Line.h"

int main()
{
	Line L(25);
	int l= 100;

	L.getLine();
	L.setLine(l);
	L.incrementLine(l);
	L.displayLine(l);

	return 0;
}