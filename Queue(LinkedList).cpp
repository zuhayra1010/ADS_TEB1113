#include <iostream>
#include <string>
using namespace std;
//Queue (Linked List)
class Queue{ 
    public: 
        string name; 
        Queue* next = NULL; 
        Queue* front = NULL; 
        Queue* rear = NULL; 
    
    //Enqueue - insert 
    void enqueue(string name){ 
        Queue* newNode = new Queue();
        newNode->name = name;
        newNode->next = NULL;
        
        if(front == NULL){ 
            front = rear = newNode; 
        } else{ 
            rear->next = newNode; 
            rear = newNode; 
        }
    } 
    
    //Dequeue - delete 
    void dequeue(){ 
        if(front==NULL){ 
            cout<<"Queue is empty."<<endl; 
            return;
        }
        Queue* temp = front; 
        cout<<"Dequeue: "<<temp->name <<endl; 
        front = front->next; 
        //If queue becomes empty 
        if(front==NULL){ 
            rear = NULL; 
        } delete temp; 
    } 
    
    //peek 
    void peek(){ 
        if(front==NULL){ 
            cout<<"Queue is empty."<<endl; 
            return; 
        } 
        cout<<"Front element: "<<front->name<<endl;
    } 
    
        //display 
        void display_node(){ 
            if(front == NULL){ 
                cout<<"Queue is empty."<<endl; 
                return; 
            } 
            Queue* temp = front; 
            while(temp!= NULL){ 
                cout<<temp->name <<endl; temp = temp->next; 
            } 
        }
}; 
int main(){ 
    Queue queue; 
    queue.enqueue("A"); 
    queue.enqueue("B"); 
    queue.enqueue("C"); 
    queue.enqueue("D"); 
    
    cout<<"Current Queue:\n"; 
    queue.display_node(); 
    cout<<endl; 
    
    queue.dequeue(); 
    cout<<"\nCurrent Queue:\n"; 
    queue.display_node(); 
    cout<<endl; 
    
    queue.peek(); 
    return 0;
}
