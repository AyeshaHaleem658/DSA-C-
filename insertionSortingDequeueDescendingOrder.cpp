#include<iostream>
using namespace std;
// structure of a node of single linked list
struct Node{
    int data; //stores integer data
    Node* next; // stores address of next node
};
class Dequeue{   //class of dequeue we have made
    private:     // two pointers front and rear required for the queue
    Node* front; 
    Node* rear;
    public:
    Dequeue(){          // constructor
        front = nullptr;     // inital value , is null
        rear = nullptr;
    }
    bool isEmpty(){
        return front == nullptr;      // if empty then front gonna be only node
    }

    void insertFront(int value){        
        Node* newNode = new Node;        // create a newNode
        newNode->data = value;           // that newNode will have data we passed in method
        newNode->next = front;           // that newNode will have front then that front will become a newNode
        if(isEmpty()){
            front = newNode;        // make both newNode when there is only one node in the list or its empty
            rear=newNode;
        }
        else{
            front=newNode;    // else make front a newNode
        }
    }

    void insertRear(int value){   
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = nullptr;      // it will  have a null , beacuse its a tail node
        if(isEmpty()){
            front = newNode;
            rear=newNode;
        }
        else{
            rear->next=newNode;    // make rear a newNode
            rear=newNode;
        }
    }

    void insertionSorting(){
        if(isEmpty()){
            return;
        }
        Node* sorted = nullptr;       // sorted is currently nothing to point out
        Node* current = front;        // make front a current
        while(current!=nullptr){       // traverse a current till its last node
            Node* nextNode = current->next;     // make current's next one node is nextNode
            if(sorted==nullptr || current->data >= sorted->data){      // either sorted is pointing to nothing or sorted have a data less than or equal to current's data
                current->next = sorted; 
                sorted = current;
            }else{
                Node* temp = sorted;       //store a sorted top element as temporary
                while(temp->next!=nullptr && temp->next->data >= current->data){    //traverse temp  till its next node become null and temporary's next data is greater than or equal to current's data
                    temp = temp -> next; // move temp to next of top element
                }
                current->next = temp->next;    // make current's next element temp next element
                temp->next = current;          // temp's nexxt will be a current now.
            }
            current= nextNode;     // current is now nextNode
        }
        front = sorted;       // say sorted a front, a top element 
        rear =front;     // make that top element rear
        while(rear->next!=nullptr){
            rear=rear->next;
        }
    }


    void display() {
        if (isEmpty()) {
            cout << "Deque is empty." << endl;
            return;
        }
        Node* current = front;
        while (current != NULL) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

};
int main(){
    Dequeue deq;
    deq.insertFront(10);
    deq.insertFront(20);
    deq.insertFront(30);
    deq.insertFront(40);
    deq.insertFront(50);
    deq.insertFront(60);
    deq.insertFront(70);
    deq.insertFront(80);

    deq.display();

    deq.insertRear(2);
    deq.insertRear(3);
    deq.insertRear(4);
    deq.insertRear(5);
    deq.insertRear(6);
    deq.insertRear(7);
    deq.insertRear(8);

    deq.display();

    deq.insertionSorting();

    deq.display();




    return 0;
}