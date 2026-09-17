#include<iostream>
using namespace std;
class ArrayList{
    private: 
char* myElements;
int Size;
int capacity;
public:
ArrayList(){
    Size=0;
    capacity=15;
    myElements = new char[capacity];
}
void add(char value){
    myElements[Size] = value;
    Size++;
}
void insert(int index, char value){
    for(int i = Size; i > index ; i--){
        myElements[i]=myElements[i-1];
    }
    myElements[index]=value;
    Size++;
}
void remove(int index){
    for(int i = index;i< Size-1; i++){
        myElements[i]=myElements[i+1];
    }
    Size--;
}
int size(){
    return Size;
}
char get(int index){
    return myElements[index];
}
};
int main(){
    ArrayList list;
    list.add('A');
    list.add('Y');
    list.add('E');
    list.add('S');
    list.add('H');
    list.add('A');
    list.add(' ');
    list.add('H');
    list.add('A');
    list.add('L');
    list.add('E');
    list.add('E');
    list.add('M');

    list.insert(4,'A');

    list.remove(4);

    for(int i=0;i<list.size();i++){
        cout<<list.get(i)<<" ";
    }

    return 0;
}