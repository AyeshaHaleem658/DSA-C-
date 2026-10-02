#include<iostream>
using namespace std;
struct Node{
    string data;
    Node* next;
    Node* prev;
    Node(string value) : prev(nullptr), data(value), next(nullptr){}
};
class DoubleLinkedList{
    private:     //pointer variables
    Node* head;
    Node* tail;
    public:      //constructor of class
    DoubleLinkedList(){
        head = nullptr;
        tail = nullptr;
    }
    void insertAtTheBegining(string value){
        Node* newNode = new Node(value);
        if(head==nullptr){
            head=newNode;
            tail=newNode;
        }else{
            newNode->next=head;
            head->prev=newNode;
            head=newNode;
        }
    }
    void display(){
        Node* curr = head;
        while(curr!=nullptr){
            cout<<curr->data<<" ";
            curr=curr->next;
        }cout<<endl;
    }
};
int main(){
    DoubleLinkedList ddlist;
    ddlist.insertAtTheBegining("AYESHA");
    ddlist.insertAtTheBegining("SANA");
    ddlist.insertAtTheBegining("KHADIJA");
    ddlist.insertAtTheBegining("GOPALI");
    ddlist.insertAtTheBegining("RUBIA");
    cout<<"EXISTING DOUBLE LINKED LIST : ";
    ddlist.display();
    ddlist.insertAtTheBegining("NEW NODE");
    cout<<"NEW DOUBLE LINKED LIST : ";
    ddlist.display();
    return 0;
}