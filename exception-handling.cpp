#include <iostream>
using namespace std;
int main()
{
    int a, b;
    try
    {
        cout << "ENTER 2 NUMBERS:";
        cin >> a >> b;
        if (b == 0)
            throw 0;
        cout << "DIVISION=" << a / b;
    }
    catch (int x)
    {
        cout << "exception found";
    }
}