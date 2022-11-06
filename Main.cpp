#include "Line.h"

int main()
{
	Line L(25); // Instances of constructor
	Line L1(25, 0);
	Line L2(100);
	Line L3(250);
	int l = 200;

	L.getLine();
	L.setLine(l);
	L.incrementLine(l);
	L1.getLine();
	L1.setLine(l);
	L.displayLine(l);
	L1.displayLine(l);
	std::cout << "\nNow Entering StandAloneFx1" << endl;
	L3.standAloneFx1(l);
	std::cout << "\nNow Entering StandAloneFx2" << endl;
	L2.standAloneFx2(l);
     
	L.~Line(); // The destructor is called L Object
	L2.~Line(); // The destructor is called L2 Object
	L2.~Line(); // The destructor is called L3 Object

	return 0;
}