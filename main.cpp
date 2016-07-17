#include <segment>
#include <point>
#include <iostream>

int main()
{
    segment a(point(0, 0), point(0, 1));
    std::cout << a.length()<<std::endl;;
    return 0;
}
