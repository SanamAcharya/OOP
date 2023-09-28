#include <iostream>
using namespace std;
class Overloading
{
private:
    /* data */
public:
    void add(int x, int y)
    {
        cout << "FRST METHOD CALLED  SUM=x+y" << endl;
    }

    void add(double x, double y)
    {
        cout << "SECOND METHOD CALLED   SUM=x+y" << endl;
    }

    void add(int x, int y, int z)
    {
        cout << "THIRD METHOD CALLED SUM=x+y+z" << endl;
    }
};
int main()
{
    Overloading obj;
    obj.add(5f, 6f);
    obj.add(3.5, 6.5);
    obj.add(2, 5, 6)
}