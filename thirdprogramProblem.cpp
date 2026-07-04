#include<iostream>
#include<math.h>
using namespace std;
int main(){
cout<<"PROGRAM TO CALCULATE GPA OF STUDENT"<<endl;
double creditHours1;
double creditHours2;
double creditHours3;
double creditHours4;
double creditHours5;
double creditHours6;
double earnedPoints;
cout<<"ENTER CREDIT HOUR # 1 : ";
cin>>creditHours1;
cout<<"ENTER CREDIT HOUR # 2 : ";
cin>>creditHours2;
cout<<"ENTER CREDIT HOUR # 3 : ";
cin>>creditHours3;
cout<<"ENTER CREDIT HOUR # 4 : ";
cin>>creditHours4;
cout<<"ENTER CREDIT HOUR # 5 : ";
cin>>creditHours5;
cout<<"ENTER CREDIT HOUR # 6 : ";
cin>>creditHours6;
cout<<"ENTERED CREDIT HOURS : \n a). "<<creditHours1<<"\n b). "<<creditHours2<<" \n c). "<<creditHours3<<"\n d). "<<creditHours4<<"\n e). "<<creditHours5<<"\n f). "<<creditHours6<<endl;
cout<<"ENTER YOUR EARNED POINTS : [PLEASE ENTER IN RANGE BW 23.0 AND 35.0]";
cin>>earnedPoints;
if(earnedPoints>=creditHours1){
    double GPA = earnedPoints/creditHours1;
    cout<<"GPA FOR CREDIT HOUR # 01 IS : "<<GPA<<endl;
}else{
    cout<<"BETTER LUCK NEXT TIME!";
}
if(earnedPoints>=creditHours2){
    double GPA = earnedPoints/creditHours2;
    cout<<"GPA FOR CREDIT HOUR # 02 IS : "<<GPA<<endl;
}else{
    cout<<"BETTER LUCK NEXT TIME!"<<endl;
}
if(earnedPoints>=creditHours3){
    double GPA = earnedPoints/creditHours3;
    cout<<"GPA FOR CREDIT HOUR # 03 IS : "<<GPA<<endl;
}else{
    cout<<"BETTER LUCK NEXT TIME!"<<endl;
}
if(earnedPoints>=creditHours4){
    double GPA = earnedPoints/creditHours4;
    cout<<"GPA FOR CREDIT HOUR # 04 IS : "<<GPA<<endl;
}else{
    cout<<"BETTER LUCK NEXT TIME!"<<endl;
}
if(earnedPoints>=creditHours5){
    double GPA = earnedPoints/creditHours5;
    cout<<"GPA FOR CREDIT HOUR # 05 IS : "<<GPA<<endl;
}else{
    cout<<"BETTER LUCK NEXT TIME!"<<endl;
}
if(earnedPoints>=creditHours6){
    double GPA = earnedPoints/creditHours6;
    cout<<"GPA FOR CREDIT HOUR # 06 IS : "<<GPA;
}else{
    cout<<"BETTER LUCK NEXT TIME!"<<endl;
}
return 0;
}
