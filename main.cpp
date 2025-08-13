#include <iostream>
#include "vector/vector.hpp"
#include "linkedlist/linkedlist.hpp"
void Vector_Homework();
void LinkedList_Homework();
int main()
{
    std::cout << "Enter the string :";
    std::string str;
    std::getline(std::cin , str);
    int Start = 0;
    int End = str.size() - 1;
    while(str[Start] == ' ') Start++;
    while(str[End] == ' ')  --End;
    std::cout << Start << ' ' << End << std::endl;
    int pos = 0;
    int cnt = 0;
    while(Start < End){
        if(str[Start] == ' ') {
                pos = Start;
        }
        Start++;
    }
    if (Start == End) pos = Start;
    while(pos <= End) pos++,cnt++;
    std::cout << cnt << std::endl;
    //Vector_Homework();
    //LinkedList_Homework();
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
