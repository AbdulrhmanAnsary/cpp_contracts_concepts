#include <iostream>
//#define NDEBUG // Cancel all the accerts instead of removing it manually, It should be above the cassart library
#include <cassert>

using namespace std;

int main(int argc, char *argv[])
{
    float x, y;

    cout << "Enter two numbers seperated by space: ";
    cin >> x >> y;
    assert(y != 0 && "y shouldn't equal zero"); // Happening at runtime

    cout << x / y << endl;

    return 0;
}