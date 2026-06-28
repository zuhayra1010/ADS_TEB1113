#include <iostream>
#include <string>
using namespace std;
//Queue (Array)

class Queue{
    private:
        string arr[100];
        int front;
        int rear;
    public: 
       Queue(){
           front = 0;
           rear = -1;
       }

    //Enqueue - insert
    void enqueue(string name){
        if(rear == 99){
            cout<<"Queue Overflow!"<<endl;
            return;
        }
        rear++;
        arr[rear] = name;
    }
    
    //Dequeue - delete
    void dequeue(){
        if(front>rear){
            cout<<"Queue is empty."<<endl;
            return;
        }
       cout<<"Dequeued: "<<arr[front]<<endl;
       front++;
    }
    
    //peek()
    void peek_node(){
        if(front>rear){
            cout<<"Queue is empty."<<endl;
            return;
        }
        cout<<"Front element: "<<arr[front]<<endl;
    }
    
    //Display
    void display_stack(){
        if(front>rear){
           cout<<"Queue is empty."<<endl;
           return;
        }
        for(int i = front; i<=rear; i++){
            cout<<arr[i]<<endl;
        }
    }
};

int main() {
  Queue queue;

  //enqueue
  queue.enqueue("A");  
  queue.enqueue("B"); 
  queue.enqueue("C"); 
  queue.enqueue("D"); 

  cout<< "Current Stack:\n";
  queue.display_stack();
  
  //dequeue
  queue.dequeue();
  
  cout<<"\nCurrent Stack:\n";
  queue.display_stack();
  
  //peek()
  cout<<endl;
  queue.peek_node();
  
  return 0;
}
