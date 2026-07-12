#include<iostream>
using namespace std;
void pattern4(int n){
    for(int i = 1 ; i<=n ; i++){
        for(int j = 1 ; j<=i ; j++){
            cout<<i;
        }
        cout<<endl;
    }
}
int main(){
    int number;
    cout<<"ENTER A NUMBER : ";
    cin>>number;
    pattern4(number);
    return 0;

}