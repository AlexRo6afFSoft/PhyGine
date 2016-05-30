#include <point>
#include <segment>
#include <iostream>

int main()
{
    segment a(point(0, 0), point(1, 1));
    std::cout << a.length();
    return 0;
}
