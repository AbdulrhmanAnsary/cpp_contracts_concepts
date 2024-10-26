#include <iostream>

using namespace std;

template <class T, int Size>
class Dimension
{
    // It a keyword working at compile time
    static_assert(Size > 3 && "Dimension size is too small!");
    T m_value[Size];
};

int main(int argc, char *argv[])
{
    Dimension<int, 4> four; // Tis will work
    Dimension<int, 2> two;  // This will fail
    Dimension<int, 3> three; // Thia will fail
    
    return 0;
}