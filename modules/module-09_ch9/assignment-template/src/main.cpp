#include <iostream>
#include <memory>
#include <string>

struct Node {
    int data;
    std::shared_ptr<Node> next;
    
    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
private:
    std::shared_ptr<Node> head;
    
public:
    // TODO: Implement constructor
    LinkedList();
    
    // TODO: Implement destructor (if needed with smart pointers)
    ~LinkedList();
    
    // TODO: Implement insert at beginning
    void insertAtBeginning(int value);
    
    // TODO: Implement insert at end
    void insertAtEnd(int value);
    
    // TODO: Implement insert at position
    void insertAtPosition(int value, int position);
    
    // TODO: Implement delete by value
    bool deleteByValue(int value);
    
    // TODO: Implement search function
    bool search(int value);
    
    // TODO: Implement display function
    void display();
    
    // TODO: Implement size function
    int size();
    
    // TODO: Implement reverse function
    void reverse();
};

int main() {
    // TODO: Create a LinkedList object
    
    // TODO: Insert elements at various positions
    
    // TODO: Display the list
    
    // TODO: Search for specific elements
    
    // TODO: Delete some elements
    
    // TODO: Display list size
    
    // TODO: Reverse the list and display
    
    // BONUS TODO: Implement merge two sorted linked lists
    
    return 0;
}