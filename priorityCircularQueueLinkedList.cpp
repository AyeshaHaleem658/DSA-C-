#include<iostream>
using namespace std;
struct Node{
    int data;
    int priority;
    Node* next;
};
Node* front =nullptr;
Node* rear = nullptr;
void enqueue(int value,int priority){
    Node* newNode = new Node;
    newNode->data=value;
    newNode->priority=priority;
    newNode->next=nullptr;
    if(front==nullptr){
        front=rear=newNode;
    }else{
        if(priority<front->priority){
            newNode->next=front;
            front=newNode;
            return;
        }
        Node* current = front;
        while(current->next!=nullptr && current->next->priority <=priority){
            current=current->next;
            
        }
        newNode->next = current->next;
        current->next = newNode;
        if(newNode->next==nullptr){
            rear=newNode;
        }
    }
}
void display(){
    if (front == nullptr) {
        cout << "Queue is empty." << endl;
        return;
    }
    Node* temp = front;
    while(temp != nullptr){
        cout << temp->data << " "; // Added a space so they don't bunch up
        temp = temp->next;
    }
    cout << endl;
}
int main(){
    enqueue(10,3);
    enqueue(30,2);
    enqueue(50,6);
    enqueue(20,8);
    enqueue(80,9);
    enqueue(70,3);
    enqueue(60,5);
    enqueue(90,7);
    enqueue(20,1);
    enqueue(60,2);
    enqueue(10,8);
display();
    return 0;
}