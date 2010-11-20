#include <iostream>

using namespace std;

int main(int argc, char** argv)
{

	const char* query = R"*(
		select *
		from users u
		where u.name = "John Doe"
	)*";

	cout << query << endl;
	
	const char* ustr = u8"Unicode Char: \u8634.";
	
	cout << ustr << endl;

	return 0;
}
