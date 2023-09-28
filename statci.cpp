#include <iostream>
using namespace std;
class A
{
public:
    static int x;
    int y;

    void setData(int a, int b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout << "x=" << x << "y=" << y << endl;
    }

    static void dispaly_static()
    {
        cout << "x=" << x << endl;
    }
};
int A::x;
int main()
{
    A obj1, obj2;
    obj1.setData(3, 7);
    obj2.setData(5, 6);
    obj1.display();         // non static method
    obj2.display();         // non static method
    A::dispaly_static();    // static method
    return 0;
}