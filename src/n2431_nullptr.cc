#include <iostream>
#include <cassert>
#include <exception>

using namespace std;

void test(char* ptr)
{
	if (ptr == nullptr)
	{
		throw exception();
	}
}

int main(int argc, char** argv)
{

	const char* test_null = nullptr;
	assert(test_null == nullptr);
	cout << "size of nullptr: " << sizeof(nullptr) << endl;
	test(nullptr);
	
	return 0;
}
