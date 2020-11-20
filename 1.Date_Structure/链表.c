#include<iostream>

// 请在下面实现结点类 Node
class Node { 
public:
    int data;
    Node *next;
    Node(int _data){
        data=_data;
        next=NULL;
    }
    
};
// 请在下面实现链表类 LinkedList
class LinkedList {
private:
    Node *head;
public:
    LinkedList(){
        head=NULL;
    }
    ~LinkedList(){
        Node *current_node= head;
        while(current_node != NULL) {
            Node *delete_node = current_node;
            current_node = current_node->next;
            delete delete_node;
        }
    }
};

int main() {
	LinkedList linkedlist;
    return 0;
}
