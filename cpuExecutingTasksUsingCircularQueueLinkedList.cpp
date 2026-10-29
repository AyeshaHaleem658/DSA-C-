#include<iostream>
using namespace std;
struct Node{
    int task;
    Node* next;
};
Node* front = nullptr;
Node* rear = nullptr;
void enqueue(int value){
    Node* newNode = new Node;
    newNode->task=value;
    newNode->next=nullptr;
    if(front==nullptr){
        cout<<"QUEUE IS NULL"<<endl;
    }else{
        rear->next=newNode;
        rear=newNode;
    }
    rear->next=front;
}
void dequeue(){
    Node* temp = front;
    int task = front->task;
    if (front == rear) {
        delete temp;
        front = rear = nullptr; // Reset to empty queue state
    } 
    // Case B: Multiple nodes exist
    else {
        front = front->next;
        rear->next = front; // FIX 3: Re-link rear to the new front to keep loop intact
        delete temp;
    }
}
void CPUexecutingTasks(){
    if(front==nullptr){
        cout<<"QUEUE IS EMPTY "<<endl;
    }else{
        while(front!=nullptr){
            dequeue();
        }dequeue();
    }
}
void display(){
    Node* temp = front;
    do{
        cout<<temp->task;
        temp=temp->next;
    }
    while(temp!=nullptr);
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    enqueue(70);
    enqueue(80);
    enqueue(90);
    enqueue(100);
    display();
    CPUexecutingTasks();

    return 0;
}