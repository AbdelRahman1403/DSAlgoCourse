#include "linkedlist.hpp"
void LinkedList::display() {
    Node* cur = head;
    while(cur != nullptr){
        std::cout << cur->data << ' ';
        cur = cur->next;
    }
    std::cout << std::endl;
}
void LinkedList::DisplayWithVector(){
for(int i = 0 ; i < nodes.size(); i++){
    std::cout << nodes[i]->data << ' ';
}
std::cout << std::endl;
}
void LinkedList::insert_end(int data){
    Node* node = new Node(data);
    if(!head){
        head = tail = node;
    }
    else{
        tail->next = node;
        tail = node;
    }
    nodes.push_back(node);
    ++length;
}

Node* LinkedList::get_nth (int idx){
    Node* ret = nullptr;
    int cnt = 1;
    for(Node* cur = head; cur != nullptr; cur = cur->next , ++cnt){
        if(idx == cnt){
            ret = cur;
            break;
        }
    }
    return ret;
}
int LinkedList::Search(int val){
    Node* cur = head;
    int ret = -1;
    while(cur != nullptr){
        if(val == cur->data){
            ret = 1;
            break;
        }
    }
    return ret;
}
int LinkedList::Improved_Search(int val) {
    int idx = 1;
    Node* prev = nullptr;

    for (Node* cur = head; cur!=nullptr; cur = cur->next){
        if (cur->data == val) {
            if (!prev)
                return idx;
            std::swap(prev->data , cur->data);
            return idx - 1;
        }
        prev = cur;  // Move this to the body
        idx++;
    }
    return -1;
}















