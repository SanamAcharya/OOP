#include <iostream>
using namespace std;
typedef string text_t;  //first method
typedef int x; // first method



using text=string;//second method
using number=int;// second method
int main()
{
    text_t name = "sanam_acharya"; // here text_t acts as an string!!
    cout << name << endl;
    x a = 100;
    cout << a;


    number n=56;
    return 0;
}
