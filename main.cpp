#include <iostream>
#include "vector/vector.hpp"
#include "linkedlist/linkedlist.hpp"
void Vector_Homework();
void LinkedList_Homework();
int main()
{
    //Vector_Homework();
    LinkedList_Homework();
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
void LinkedList_Homework(){
    LinkedList List;
    List.insert_end(5);
    List.insert_end(5);
    List.insert_end(7);
    List.insert_end(8);
    List.insert_end(9);
    List.display();
///Part 1 of homework

///Part 2 Of homework
    //List.delete_node(5);
    //List.Reverse_LL();
    //List.delete_even_pos();
    //List.insert_be_sorted(6);
    //List.insert_be_sorted(6);
    //List.insert_be_sorted(2);
    //List.insert_be_sorted(10);

////////////////////////
    List.display();
}
