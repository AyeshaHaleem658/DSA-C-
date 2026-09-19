#include<iostream>
using namespace std;
struct Node{
int data;
Node* next;
Node(int value) : data(value),next(nullptr){}
};
int findLength(Node* head){
    int length = 0;
    while(head!=nullptr){
        length++;
        head=head->next;
    }
    return length;
}
int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next= new Node(3);
    cout<<"LENGTH OF SINGLE LINKEDLIST IS : "<<findLength(head)<<endl;
}