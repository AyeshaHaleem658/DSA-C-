// #include <iostream>
// using namespace std;

// #define SIZE 5

// struct PriorityElement {
//     int data;
//     int priority;
// };

// PriorityElement priorityQueue[SIZE];
// int rear = -1;
// bool isFull() {
//     return rear == SIZE - 1;
// }
// bool isEmpty() {
//     return rear == -1;
// }
// void enqueue(int element, int priority) {
//     if (isFull()) {
//         cout <<"Queue is full"<< endl;
//         return;    }
//     rear++;
//     int i = rear;
//     while (i > 0 && priorityQueue[i - 1].priority < priority) {
//         priorityQueue[i] = priorityQueue[i - 1];
//         i--;    }
//     priorityQueue[i].data = element;
//     priorityQueue[i].priority = priority;
// }

// PriorityElement dequeue() {
//     if (isEmpty()) {
//         cout <<"Queue is empty"<< endl;
//         return { -1, -1 };
//     }
//     PriorityElement element = priorityQueue[rear];
//     rear--;
//     return element;
// }


// void display() {
//     if (isEmpty()) {
//         cout <<"Queue is empty"<< endl;
//         return;    }
//     cout <<"Priority Queue: ";
//     for (int i = 0; i <= rear; i++) 
//      cout <<"("<< priorityQueue[i].data <<", "<< priorityQueue[i].priority <<") ";
//     cout << endl;
// }

// int main() {
//     	enqueue(1, 2);
//     		enqueue(2, 1);
//     		enqueue(3, 3);
//     		enqueue(4, 2);
//     		enqueue(5, 4);
//     		display();
//     		PriorityElement e = dequeue();
//     		cout <<"Dequeued: ("<< e.data <<", "<< e.priority <<")"<< endl;
//     		display();
//    }


#include<iostream>
using namespace std;
#define size 5
struct priorityQueue{
    int data;
    int priority;
};
priorityQueue pq[ size ];
int rear = -1;
bool isFull(){
    return rear==size-1;
}
bool isEmpty(){
    return rear==-1;
}
void enqueue(int x,int y){
    if(isFull()){
        cout<<"QUEUE IS FULL, NO MORE ELEMENT CAN ADDED!"<<endl;
        return;
    }
    rear++;
    int i = rear;
    while(i>0 && pq[i-1].priority<y){
        pq[i] = pq[i-1];
        i--;
    }
    pq[i].data = x;
    pq[i].priority = y;
}
priorityQueue dequeue(){
    if(isEmpty()){
        cout<<"QUEUEU IS EMPTY, NOTHING TO DELETE!" <<endl;
        return {-1,-1};
    }
    
    priorityQueue x = pq[rear];
    rear--;
}
void display()
{
    if(isEmpty()){
        cout<<"QUEUEU IS EMPTY!"<<endl;
        return ;
    }
    cout<<"PRIORITY QUEUE : ";
    for(int i =0;i<rear;i++){
        cout<<"("<<pq[i].data<<" , "<<pq[i].priority<<")";
    }cout<<endl;
}
int main(){
    enqueue(1,2);
    enqueue(45,8);
    enqueue(23,2);
    enqueue(4,4);
    enqueue(7,3);
    enqueue(6,1);
    cout<<" ORIGINAL QUEUE : ";
    display();
    dequeue();
    cout<<"AFTER DELETION : ";
    display();



    return 0;
}
















