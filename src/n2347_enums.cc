#include <iostream>
#include <cassert>
#include <exception>

using namespace std;

enum Color : unsigned int {Red = 4, Green, Blue};

string* getColor(Color color)
{
	switch (color)
	{
		case Color::Red: return new string("red");
		default: return new string("unknown");
	}
}

int main(int argc, char** argv)
{

	Color c = Color::Red;
	cout << "red: " << c << " green: " << Color::Green << endl;

	string* str = getColor(c);
	cout << "color: " << *str << endl;
	cout << "color nr: " << (unsigned int)c << endl;

	delete str;

	return 0;
}
