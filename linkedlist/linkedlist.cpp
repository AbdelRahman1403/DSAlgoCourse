#include "linkedlist.hpp"
void LinkedList::display() {
    Node* cur = head;
    while(cur != nullptr){
        std::cout << cur->data << ' ';
        cur = cur->next;
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
    ++length;

}

Node* LinkedList::get_nth (int idx)const{
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
int LinkedList::Search(int val)const{
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
int LinkedList::Improved_Search(int val) const {
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
int LinkedList::get_Length()const{
    return length;
}
//////////////////////////////Homework part 1 (Easy)//////////////////////////////
LinkedList::~LinkedList(){
    while(head != nullptr){
        Node* n = head;
        head = head->next;
        free(n);
    }
}
bool LinkedList::insert_front(int data){
    bool ret = false;
    if(head == nullptr){
        insert_end(data);
    }
    else{
        Node* node = new Node(data , head);
        head = node;
        ++length;
        ret = true;
    }
    return ret;
}

bool LinkedList::delete_front(){
    bool ret = false;
    if(head == nullptr){
        ret = false;
    }
    else{
        Node* node = head;
        head = head->next;
        free(node);
        ret = true;
    }
    return ret;
}
Node* LinkedList::get_nth_back(int idx)const{
    if(idx == length) return tail;
    else if(idx == 1) return head;
        Node *cur = head->next;
        int cnt = 2;
        while(cur->next != nullptr){
            if(cnt == (length - idx)){
                break;
            }
            else{
                cnt++;
                cur = cur->next;
            }
        }
    return cur->next;
}


bool LinkedList::Is_Same(const LinkedList& List){
    if(length != List.length) return false;

    Node* other = List.head;
    Node* cur = head;
    for(; cur ; cur = cur->next , other = other->next){
        if(cur->data != other->data){
            return false;
        }
    }
    return true;
}
///////////////////////////////Part 2 Homework///////////////////////////////
//Problem 1
bool LinkedList::delete_node(int val){
    if(head==nullptr) return head;
    Node *prev = head;
        while(head!=nullptr && head->data==val){
            head = head->next;
            free(prev);
            prev = prev->next;
        }
        Node* curr = head ;
        while(curr!=nullptr){
            if(curr->data==val){
                prev->next = curr->next;
                curr = curr->next;
            }
            else{
                prev = curr;
                curr = curr->next;
            }
        }
    return true;

}

void LinkedList::swap_pairs(){
    if(head == nullptr) return;
    else if (head->next == nullptr) return;
    else {
        Node *cur = head->next;
        Node *prev = head;
        while(cur!= nullptr && cur->next!=nullptr){
            std::swap(cur->data , prev->data);
            cur = cur->next->next;
            prev = prev->next->next;
        }
    }
}

void LinkedList::Reverse_LL(){
    Node *prev = nullptr , *cur = head;

    while(head->next){
        cur = head->next;
        head->next = prev;
        prev = head;
        head = cur;
    }
    head->next = prev;
}

void LinkedList::delete_even_pos(){
    if(head == nullptr) return;
    else if (head->next == nullptr) return;
    else{
        int cnt = 1;
        Node *curr = head , *prev = nullptr;
        while(curr != nullptr){
            if(cnt % 2 == 0){
                prev->next = curr->next;
                delete curr;
                curr = prev->next;
            }
            else {
                prev = curr;
                curr = curr->next;
            }
            cnt++;
        }
    }
}

void LinkedList::insert_be_sorted(int val){
    if(!head) insert_end(val);
    else {
        if(val >= tail->data) insert_end(val);
        else if(val <= head->data) insert_front(val);
        else{
            Node *newNode = new Node(val);
            Node *curr = head , *prev = nullptr;
            while(curr->next){
                if(curr->data >= val) {
                    prev->next = newNode;
                    newNode->next = curr;
                    break;
                }
                else{
                    prev = curr;
                    curr = curr->next;
                }
            }
        }
    }


}









