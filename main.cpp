#include <iostream>
#include "vector/vector.hpp"
#include "linkedlist/linkedlist.hpp"
void Vector_Homework();
int main()
{
    LinkedList node;
    node.insert_end(5);
    node.insert_end(6);
    node.insert_end(4);
    node.insert_end(3);
    node.display();
    node.get_nth(4);
    node.display();

}
void Vector_Homework(){
Vector v1;
    v1.Push_Back(0);
    v1.Push_Back(1);
    v1.Push_Back(2);
    v1.Push_Back(3);
    v1.Push_Back(4);
    v1.print();
    v1.Find_Transportation(2);
    v1.print();
}
