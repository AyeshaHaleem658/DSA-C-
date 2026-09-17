#include<iostream> //headerFile
using namespace std; 
class ArrayList{       //class of ArrayList, as in OOP Java, there were generic classes so same here
    private:           //access modifier of private, that means it's hidden and no one outsider can change it
    int* myElements;   //a pointer towards the dynamic array named as myElements
    int myCapacity;    //total indexes/places available
    int mySize;        //occupied
    public:            //we gonna define constructor of ArrayList class, so concstructor must not be private.
    ArrayList(){
        myCapacity = 15;       //there will be total places 15, 15 values can be sit in arraylist
        mySize = 0;
        myElements = new int[myCapacity];  //reserve a space for 15 integers
    }
void add(int value){            //add function used to add values in arraylist, add functions put value in rraylist from last
   myElements[mySize] = value;  //pointer to array in heap
   mySize++;                    //increment element by one
}
void insert(int index, int value){//a non-returning function of insert, that does function but not return value, takes index,value to be add
//    "There is size 7 which means occupied spaces. I want to insert value 4 at index 3. I take an iterator that goes through the arraylist from right to left. Check condition: is iterator greater than size? ... then move i-1 to i. When iterator becomes 4 and size is 4, loop ends. Then place value at index. Then increment size."
// Almost perfect. Only two small corrections:
// The condition is i > index, not i > size. The loop starts at i = size and stops when i reaches index.
// The iterator starts at size (the first empty slot), not at the end of the whole array. It only walks down to index.
    for(int i = mySize; i>index;i--){  //run a for loop , iterator goes through the values and check the condition, when both values become equal loop ends.
myElements[i]=myElements[i-1];
    }
    myElements[index]=value;
    mySize++;
}
int size(){
    return mySize;
}
int get(int index){ 
return myElements[index];   //return pointer with index
}
};
int main(){
    ArrayList list;  //object of class arraylist
    list.add(19);    //add integer by calling add method and pass what value i want to store
    list.add(34);
    list.add(23);
    list.add(42);
    list.add(89);
    list.add(5);
    list.add(64);
    list.add(2);
    list.add(64);

    list.insert(4,100);   //insert value integer 100 at index 4.

    for(int i = 0; i<list.size(); i++){   //iterator starts from 0, check is iterator less than list's size or occupants? if yes then 
        cout<<list.get(i)<<" ";    //print what is in dynamic arraylist? use that get method and pass the iterator value as parameter and print
    }
    return 0;
}