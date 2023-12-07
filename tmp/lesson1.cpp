#include <iostream>
template<class T>
T add(T a,T b)
{
    return a + b;
}
 
int main()
{

    int a = 1, b = 1;
    std::cout << add(a, b);
    return 0;
}