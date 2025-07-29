#include <iostream>
#include <vector>
struct Node{
    int data;
    Node* next;
    Node(int data) : data(data) , next(nullptr){}
    ~Node(){}
};

class LinkedList{
private:
    Node *head {};
    Node *tail {};
    int length = 0;
    std::vector<Node*> nodes;
public:
    void display();
    void DisplayWithVector();
    void insert_end(int data);
    Node* get_nth (int idx);
    int Search(int val);
    int Improved_Search(int val);
};
