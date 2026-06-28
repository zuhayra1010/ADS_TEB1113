#include <iostream>
#include <string>

using namespace std;
//Stack (Array)
class Stack{
    private:
        string arr[100];
        int top;
    public: 
       Stack(){
           top = -1;
       }

    //push()
    void push_node(string name){
        if(top == 99){
            cout<<"Stack Overflow!"<<endl;
            return;
        }
        top++;
        arr[top] = name;
    }
    
    //pop()
    void pop_node(){
        if(top == -1){
            cout<<"Stack is empty."<<endl;
            return;
        }
       cout<<"Popped: "<<arr[top]<<endl;
       top--;
    }
    
    //peek()
    void peek_node(){
        if(top == -1){
            cout<<"Stack is empty."<<endl;
            return;
        }
        cout<<"Top element: "<<arr[top]<<endl;
    }
    
    //Display
    void display_stack(){
        if(top == -1){
           cout<<"Stack is empty."<<endl;
           return;
        }
        for(int i = top; i>=0; i--){
            cout<<arr[i]<<endl;
        }
    }
};

int main() {
  Stack stack;

  stack.push_node("A");  
  stack.push_node("B"); 
  stack.push_node("C"); 
  stack.push_node("D"); 

  cout<< "Current Stack:\n";
  stack.display_stack();
  
  //pop()
  stack.pop_node();
  
  cout<<"\nCurrent Stack:\n";
  stack.display_stack();
  
  //peek()
  cout<<endl;
  stack.peek_node();
  
  return 0;
}
