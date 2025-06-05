#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        next = NULL;
    }
};

//stack class
class Stack
{
private:
     Node *top; //Pointer to the node of the stack

public: 
    Stack()
    {
        top = NULL; //Intialize the stack with a null top pointer
    }

    //Push operation: Insert an element onto the top of the stack
    int push(int value)
    {
        Node *newNode = new Node(); //1.Allocate memory for the newNode
        newNode->data = value; // 2. assign value
        newNode->next = top;   // 3. Set the next pointer of the new node to the current
        top = newNode;         // 4. Update the top pointer to the new node
        cout << "Push value:" << value << endl;
        return value;

    }

    // IsEmpty operation: Check if the stack is empty
    bool isEmpty()
    {
        return top == NULL; // Return true if the top pointer is NULL, indicating an empty stack
    }
    
    // Pop operation: Remove the topmost element from the stack
    void pop()
    {}
};
        