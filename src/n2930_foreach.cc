#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
    auto names = new vector<string>();
    names->push_back("John Doe");
    for (auto &name : *names) {
        cout << name << "\n";
    }

    delete names;

	return 0;
}
