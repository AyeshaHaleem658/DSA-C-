#include<iostream>
using namespace std;
struct Node{
int data;
Node* next;
};
Node* front= nullptr;
Node* rear = nullptr;
void enqueue(int value){
    Node* newNode = new Node;
    newNode->data=value;
    newNode->next=nullptr;
    if(front==nullptr){
        front=rear=newNode;
    }
    else{
        rear->next=newNode;
        rear=newNode;
      
    }
    rear->next = front;
}
// void dequeue(){
//     Node* temp = front;
//     int element = front->data;
//     if(front==nullptr){
//         delete front;
//     }else{
//         front=front->next;
//         delete temp;
//     }
// }
void rotateClockwise(int positions){
if(front==nullptr){
    cout<<"QUEUE IS EMPTY"<<endl;
}
else{
    for(int i=0;i<positions;i++){
        Node* current = front->next;
        int temp = front->data;
        Node* prev = front;
        while(current!=front){
            prev->data=current->data;
            prev = current;
            current = current->next;

        }
        rear->data = temp;
    }
}
}
void display(){
    Node* temp = front;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while(temp != front);
    
    cout << endl;
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

    display();

    rotateClockwise(5);

    display();
    return 0;

}