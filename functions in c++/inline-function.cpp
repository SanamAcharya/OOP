// INLINE FUNCTIONS DECREASE EXECUTION TIME
// SAVES TIME!!!!

#include <iostream>
using namespace std;
inline int add(int x, int y, int z = 6) // makes execution faster
{
    return x + y + z;
}
int main()
{
    int result = add(3, 4);
    cout << "RESULT=" << result;
    return 0;
}