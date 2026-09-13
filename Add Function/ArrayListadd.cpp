#include<iostream>
using namespace std;
class ArrayList{
private:
int* myElements;
int myCapacity;
int mySize;
public:
ArrayList(){
    myCapacity=10;
    mySize=0;
    myElements=new int[myCapacity];
}
void add(int value){
    myElements[mySize]=value;
    mySize++;
}
int size(){
    return mySize;
}
int get(int index){
    return myElements[index];
}
};
int main(){
    ArrayList list;
    list.add(10);
    list.add(20);
    list.add(30);
    cout<<"Size : "<<list.size()<<endl;
    cout<<list.get(0)<<endl;
    cout<<list.get(1)<<endl;
    cout<<list.get(2)<<endl;
    return 0;
}