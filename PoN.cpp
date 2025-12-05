#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter number"<<endl;
	cin>>a;
	if(a>0){
		cout<<"+Positive"<<endl;
	}else if(a<0){
		cout<<"-Negative"<<endl;
	}else{
		cout<<"0"<<endl;
	}
}