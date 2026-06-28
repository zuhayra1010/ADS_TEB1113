#include <iostream>
#include <string>

using namespace std;
//Stack (Linked List)
class Stack{
    public: 
        string name;
        Stack* next = NULL;
        Stack* curr_node = NULL;
        Stack*top = NULL;

    //push()
    void insert_node(string name){
        Stack* newnode = new Stack();
        newnode->name = name;
        newnode->next = curr_node;
        curr_node = newnode;
    }
    
    //pop()
    void pop_node(){
        if(curr_node == NULL){
            cout<<"Stack is empty."<<endl;
            return;
        }
        Stack* temp = curr_node;
        cout<<"Popped:"<<temp->name<<endl;
        curr_node = curr_node->next;
        delete temp;
    }
    
    //peek()
    void peek_node(){
        if(curr_node == NULL){
            cout<<"Stack is empty."<<endl;
            return;
        }
        cout<<"Top element: "<<curr_node->name<<endl;
    }
    
    void display_stack(){
        Stack* display_node = curr_node;
        while(display_node != NULL){
            cout << display_node->name << endl;
            display_node = display_node->next;
        }
    }
    
};

int main() {
  Stack* stack = new Stack();

  stack->insert_node("A");  
  stack->insert_node("B"); 
  stack->insert_node("C"); 
  stack->insert_node("D"); 

  stack->display_stack();
  
  //pop()
  stack->pop_node();
  
  stack->display_stack();
  
  //peek()
  stack->peek_node();
  
  stack->display_stack();
  return 0;
}
