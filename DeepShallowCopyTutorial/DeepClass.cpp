#include "DeepClass.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

DeepClass::DeepClass()
{
	m_data = new int(0);
}

DeepClass::DeepClass(int value)
{
	m_data = new int(value);
}

DeepClass::DeepClass(const DeepClass& other)
{
	cout << "Performing deep copy in copy constructor" << endl;
	m_data = new int(*other.m_data);
}

DeepClass::~DeepClass()
{
	delete m_data;
}

DeepClass& DeepClass::operator = (const DeepClass& other)
{
	cout << "Performing deep copy in assignment operator" << endl;
	*m_data = *other.m_data;
	return *this;
}

void DeepClass::print()
{
	cout << "Value " << *m_data << ", at memory location " << m_data << endl;
}
