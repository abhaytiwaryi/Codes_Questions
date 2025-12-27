#include<iostream>
using namespace std;
int main(){
	char O;
	int a, b;
	cout<<"Choose the operator (+, -, *, /)"<<endl;
	cin>>O;

	if(O == '+'){
		cout<<"Enter first number"<<endl;
		cin>>a;
		cout<<"Enter second number"<<endl;
		cin>>b;
		cout<<a+b;
	} else if(O == '-'){
		cout<<"Enter first number"<<endl;
		cin>>a;
		cout<<"Enter second number"<<endl;
		cin>>b;
		cout<<a-b;
	} else if(O == '*'){
		cout<<"Enter first number"<<endl;
		cin>>a;
		cout<<"Enter second number"<<endl;
		cin>>b;
		cout<<a*b;
	} else if(O == '/'){
		cout<<"Enter first number"<<endl;
		cin>>a;
		cout<<"Enter second number"<<endl;
		cin>>b;
		cout<<a/b;
	} else{
		cout<<"Invalid Operator entered by user"<<endl;
	}

}
