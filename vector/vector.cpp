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
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

int Vector::ret_Size(){
    return Size;
}
/*
----------------------------------------------HomeWork---------------------------------------------
*/

//Right rotation
void Vector::Right_rotation(){
    std::swap(arr[0] , arr[Size-1]);
    for(int i = 1 ; i < Size-1 ; i++){
        std::swap(arr[i] , arr[Size-1]);
    }
}

//Left rotation
// 0 1 2 3 4
// 1 2 3 4 0
void Vector::Left_rotation(){
    std::swap(arr[Size-1] , arr[0]);
    for(int i = Size-2; i>0 ; i--){
        std::swap(arr[0] , arr[i]);
    }

}

//Right Rotation with steps
void Vector::Right_rotation(int times){
    times = times%Size;
    while(times--)
        Right_rotation();
}
// Delete with index
int Vector::pop(int idx){
    int x = arr[idx];
    for(int i = idx + 1; i < Size ; i++){
        arr[i-1] = arr[i];
    }
    --Size;
    return x;
}

// Find transportaiton

int Vector::Find_Transportation(int idx){
    bool ret = 0;
    if(idx <= 0 || idx > Size) {
        ret = 0;
    }
    else {
        if (idx == 1){
            ret = 1;
        }
        else {
            std::swap(arr[idx-2] , arr[idx-1]);
            ret = 1;
        }
    }
    return ret;
}














