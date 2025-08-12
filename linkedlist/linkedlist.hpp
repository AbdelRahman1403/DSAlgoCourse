#include <iostream>
#include <stack>
struct Node{
    int data;
    Node* next;
    Node() : data(0) , next(nullptr){}
    Node(int data) : data(data) , next(nullptr){}
    Node(int data , Node* next): data(data) , next(next){}
};

class LinkedList{
private:
    Node *head {};
    Node *tail {};
    std::stack<Node*>stk;
    int length = 0;
public:
    void display();
    void insert_end(int data);
    bool insert_front(int data);
    bool delete_front();
    bool Is_Same(const LinkedList& List);
    Node* get_nth (int idx) const ;
    int Search(int val) const;
    int get_Length() const;
    int Improved_Search(int val) const;
    Node* get_nth_back(int idx)const;
    /////
    void print(Node* node)const;
    /////
    ///Part 2 of homework
    bool delete_node(int val);
    void swap_pairs();
    void Reverse_LL();
    void delete_even_pos();
    void insert_be_sorted(int val);
    ///




    ~LinkedList();
};
