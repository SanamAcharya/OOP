// DEFAULT ARGUMENTS
#include <iostream>
using namespace std;
int add(int x, int y, int z = 6)
{
    return x + y + z;
}
int main()
{
    int result = add(3, 4);
    cout << "RESULT=" << result;
    return 0;
}