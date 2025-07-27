#include <iostream>
#include <algorithm>
#include<cassert>
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
    void Right_rotation();
    void Right_rotation(int times);
    int pop(int idx);
    void Left_rotation();
    int Find_Transportation(int idx);
    int ret_Size();
};
