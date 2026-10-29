#include<iostream>
#include<stack>
using namespace std;
struct Node{
    char data;
    Node* next;
};
Node* front = nullptr;
Node* rear = nullptr;
void enqueue(int value){
    Node* newNode = new Node;
    newNode->data= value;
    newNode->next = nullptr;
    if(front==nullptr){
        front=rear=newNode;
    }else{
        rear->next = newNode;
        rear=newNode;
    }

}
void dequeue(){
    if(front==nullptr){
        return ;
    }
    else{
        Node* temp = front;
        char element = temp->data;
        front= front->next;
        delete temp;
    }
}
bool isPalindrome(){
    stack<char>s;
    Node* temp = front;
    while(temp!=nullptr){
        s.push(temp->data);
        temp=temp->next;
    }
    temp=front;
    while(temp!=nullptr){
        if(temp->data != s.top()){
            return false;
        }
        s.pop();
        temp=temp->next;
    }
    return true;

}
int main(){
    string input;
    cout<<"ENTER A STRING";
    getline(cin,input);
    for(char ch : input){
        if(ch!=' '){
    enqueue(ch);
        }
} 
if(isPalindrome()){
    cout<<"YES ITS ";
}
else{
    cout<<" not";
}

    return 0;
}