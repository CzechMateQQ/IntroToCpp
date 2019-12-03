#include <iostream>
#include "ShallowClass.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	ShallowClass shallow1(10);
	ShallowClass shallow2 = shallow1;
	ShallowClass shallow3;

	shallow3 = shallow1;

	shallow1.setValue(27);

	shallow1.print();
	shallow2.print();
	shallow3.print();

	while(true) {}

	return 0;
}