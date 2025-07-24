#include <iostream>
#include "vector/vector.hpp"
#include<vector>
int main()
{
    Vector v1;
    v1.Push_Back(0);
    v1.Push_Back(1);
    v1.Push_Back(2);
    v1.Push_Back(3);
    v1.Push_Back(4);
    v1.Push_Back(5);
    v1.print();
    v1.Right_rotation();
    v1.print();
    return 0;
}
