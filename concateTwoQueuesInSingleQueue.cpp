#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* front1 = nullptr;
Node* front2 = nullptr;
Node* rear1 = nullptr;
Node* rear2 = nullptr;
void enqueue1(int element){
    Node* newNode = new Node;
    newNode->data = element;
    newNode->next = nullptr;
    if(front1==nullptr){
        front1 = rear1 = newNode;
    }else{
        rear1->next = newNode;
        rear1 = newNode;
    }
}
void enqueue2(int val){
    Node* newNode = new Node;
    newNode->data= val;
    newNode->next = nullptr;
    if(front2==nullptr){
front2=rear2=newNode;
    }
    else{
        rear2->next=newNode;
        rear2 = newNode;
    }
}
void concate(){
    if(front1==nullptr){
        front1=front2;
        rear1=rear2;
    }
    else {
        rear1->next = front2;
        rear1=rear2;
    }
    front2=rear2=nullptr;
}
void display(){
    Node* temp = front1;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    
    enqueue1(10);
    enqueue1(20);
    enqueue1(30);
    enqueue1(40);
    enqueue1(50);
    enqueue1(60);
    enqueue1(70);

    enqueue2(1);
    enqueue2(2);
    enqueue2(3);
    enqueue2(4);
    enqueue2(5);
    enqueue2(6);
    enqueue2(7);

    concate();

    display();

    return 0;}