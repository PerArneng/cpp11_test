
#include <iostream>
#include <cassert>

using namespace std;

int apply(int nr, int (*f)(int))
{
    return f(nr);
}

int main(int argc, char** argv)
{

    int result = apply(10, [](int nr) -> int 
    {
        return nr * 10;
    });

    assert(result == 100);

    int a = 5;
    auto func = [a](int nr) -> int { return nr * a; };
    result = func(10);

    assert(result == 50);

	return 0;
}
