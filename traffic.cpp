#include<iostream>
using namespace std;
int main(){
	string light;
	cout<<"Enter the light colour"<<endl;
	cin>>light;

	if(light == "red"){
		cout<<"Stop"<<endl;
	} else if(light == "yellow"){
		cout<<"Ready"<<endl;
	} else if(light == "green"){
		cout<<"Go"<<endl;
	} else{
		cout<<"Wrong inputs"<<endl;
	}
}