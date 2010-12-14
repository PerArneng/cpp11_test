#include <thread>
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{

    auto th = new thread([] { cout << "Hello, World!\n"; });
    th->join();

    delete th;

    return 0;
}
