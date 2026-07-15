#include<iostream>
#include<math.h>
using namespace std;
void basicPattern1(int n){
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cout<<"\t*";
        }
        cout<<endl;
    }
}
int main(){
    int number;
    cout<<"ENTER THE NUMBER : ";
    cin>>number;
    basicPattern1(number);
    return 0;
}