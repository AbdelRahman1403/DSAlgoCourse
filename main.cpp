#include <iostream>
#include "vector/vector.hpp"
#include<vector>
int main()
{
    Vector v1;
    for(int i = 0 ; i < 100000; i++)
        v1.Push_Back(i);

    v1.print();

    std::cout << v1.ret_Size();

    return 0;
}
