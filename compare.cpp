#include<iostream>
using namespace std;

int main(){
	double a, b;
	cout<<"Enter first number"<<endl;
	cin>>a;
	cout<<"Enter second number"<<endl;
	cin>>b;

	if(a==b){
		cout<<"Both are equal men"<<endl;
	}else if(a>b){
		cout<<a<<" is greater"<<endl;
	}else{
		cout<<b<<" is greater"<<endl;
	}
}