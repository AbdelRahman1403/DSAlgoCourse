#include <iostream>
#include <algorithm>
class Vector{
private :
    int *arr = nullptr;
    int Size { };
    int capacity { };
    void Extand_Capacity();
public :
    Vector();
    Vector(int Size);
    ~Vector();

    void Push_Back(int val);
    void print();
    int ret_Size();
};
