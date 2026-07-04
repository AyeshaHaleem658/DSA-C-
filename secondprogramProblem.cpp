#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"   PROGRAM TO PRINT LOW STOCK ALERT    \n";
    double reorderLevel = 230.9;
    double stock = 1000.0;
    cout<<"HI! WE WILL SURELY FEEL PLEASURE IF YOU ENTER YOUR DESIRED STOCK LEVEL TO BE SETTLE\n";
    cin>>stock;
    cout<<"ENTER REORDER LEVEL PLEASE !\n";
    cin>>reorderLevel;
    cout<<"YOUR ENTERED VALUES MUST BE IN RANGE LIKE :\n a). REORDERLEVEL : 230.9 \n b).STOCK : 1000.0 \n PLEASE CORRECT YOUR DATA IF IT'S NOT. \n YOUR DATA : REORDERLEVEL : "<<reorderLevel<<" STOCK : "<<stock;
    if(stock<reorderLevel){
        cout<<"LOW STOCK ALERT!!!!!!!!!!!!";
    }else{
        cout<<"CONTINUE, ENERYTHING IS SMOOTH!";
    }
    return 0;
}