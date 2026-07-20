#include<iostream>
using namespace std;
void Pattern(int n){
    // the loop is for rows
    for(int i =0 ;i<n ; i++){
        // the loop for columns
        for(int j=0;j<n;j++){
            // condition for printing where to print stars?
            if(i==0 || i==n-1 || j==0 || j==n-1 || i==j){
                cout<<"*";
            }else{
                // print spaces
                cout<<" ";
            }
        }cout<<endl;
    }
}
int main(){
    // storage variable
    int n;
    // prompt user to enter the value
    cout<<"ENTER THE NUMBER : ";
    // taking input
    cin>>n;
    // calling the method we made and passes the arguement
    Pattern(n);
    return 0;
}