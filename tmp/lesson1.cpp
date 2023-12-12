#include <iostream>
template <class T>
inline T add(T a, T b)
{
    return a + b;
}
template <typename T, typename U>
class MyClass
{
    // 通用实现
public:
    void print() { std::cout << "通用实现"; }
};

// 全特化
template <>
class MyClass<int, double>
{
public:
    void print() { std::cout << "特化实现"; }
    // 对两个模板参数都为int和double的特殊实现
};

int main()
{

    int a = 1, b = 1;
    std::cout << add(a, b);
    MyClass<int, int> obj1;
    MyClass<int, double> obj2;
    obj1.print();
    obj2.print();

    return 0;
}