#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void Print()
{
    cout << "hello world!!" << endl;
}

template <const char *str>
void Print()
{
    cout << str << endl;
}

const char tem[] = "hello world!!!";
int main()
{
    // cout << "hello world!";
    // int a = 3;
    // int b[a];
    // cout << sizeof(b);
    Print<tem>();
    return 0;
}