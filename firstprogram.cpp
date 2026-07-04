#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	cout<<"ENTER THE VALUE OF X : ";
	cin>>x;
	cout<<"THE VALUE OF X IS : "<<x;
	cout<<"~~~~~~~~~~~~~~~~~~\n";
	double d;
	cout<<"ENTER THE VALUE OF D : ";
	cin>>d;
	cout<<"ENTERED DOUBLE D IS : "<<d;
	cout<<"~~~~~~~~~~~~~~~~~~\n";
	float fl;
	cout<<"ENTER THE VALUE OF FLOAT : ";
	cin>>fl;
	cout<<"ENTERED VALUE OF FLOAT IS : "<<fl;
	cout<<"~~~~~~~~~~~~~~~~~~\n";
	long l;
	cout<<"ENTER THE VALUE OF LONG : ";
	cin>>l;
	cout<<"ENTERED VALUE OF LONG IS : "<<l;
	cout<<"~~~~~~~~~~~~~~~~~~\n";
	string str1;
	cout<<"ENTER THE STRING : ";
	cin>>str1;
	cout<<"THE ENTERED STRING : "<<str1;  //---> this will print only first word of string 
	cout<<"~~~~~~~~~~~~~~~~~~\n";
	string str;
	cout<<"ENTER THE VALUE OF STRING: ";
	getline(cin,str);
	cout<<"THE ENTERED STRING IS : "<<str;
	cout<<"~~~~~~~~~~~~~~~~~~\n";
	// how to declare the char?
	char ch = 'A';
	cout<<ch<<"\n";
	cout<<"~~~~~~~~~~~~~~~~~~\n";
	// how to declare the string?
	string str3 = "AYESHA";
	cout<<str3;

	return 0;
} 