#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cout << "hello world!";
    vector<int> v({1, 2, 3, 4});
    for (auto i : v)
        cout << i;
    return 0;
}