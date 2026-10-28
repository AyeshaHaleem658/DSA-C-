#include<iostream>
#include<stack>
using namespace std;
struct Node{
    char data;
    Node* next;
};
bool isPalindrome(Node* front){
    stack<char>s;
    Node* temp = front;
    while(temp!=nullptr){
        s.push(temp->data);
        temp=temp->next;
    }
    temp=front;
    while(temp!=nullptr){
char top = s.top();
s.pop();
if(temp->data!=top){
    return false;
    temp=temp->next;
}
    }
    return true;
}
int main(){
    Node* front = new Node{'M', nullptr};
    front->next = new Node{'O', nullptr};
    front->next->next = new Node{'M', nullptr};\
    cout << "CHECK IF DEQUEUE IS PALINDROME OR NOT" << endl;

    if (isPalindrome(front)) {
        cout << "DEQUEUE IS PALINDROME!" << endl;
    } else {
        cout << "DEQUEUE IS NOT PALINDROME!" << endl;
    }
    return 0;
}