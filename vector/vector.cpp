#include "vector.hpp"

Vector::Vector(){
    capacity = 10;
    arr = new int[10] {};
}

Vector::Vector(int Size = 0) : Size(Size){
    if(Size <= 0) this->Size = 0;
    this->capacity = this->Size + 10;
    arr = new int[this->capacity]{};
}
Vector::~Vector(){
        delete[] arr;
        arr = nullptr;
}
void Vector::Extand_Capacity(){
    capacity *= 2;
    int *arr2 = new int[capacity] {};
    for(int i = 0 ; i < Size; i++)
        arr2[i] = arr[i];
    std::swap(arr , arr2);
    delete[] arr2;
}
void Vector::Push_Back(int val){
    if (Size == capacity)
        Extand_Capacity();
    arr[Size++] = val;
}

void Vector::print(){
    for(int i = 0 ; i < Size; i++){
        std::cout << arr[i] << std::endl;
    }
}

int Vector::ret_Size(){
    return Size;
}
