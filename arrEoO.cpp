#include<iostream>
using namespace std;

int main() {

	int arr[5];

	cout<<"Enter the number: ";

	for(int i=0;i<5;i++){
		cin>>arr[i];
	}

	int even = 0;
	int odd = 0;

	for(int i=0; i<5; i++){
		if(arr[i]%2==0){
			even++;
		} else{
			odd++;
		}
	} cout<<"Even count: "<<even<<endl;
	cout<<"Odd count: "<<odd<<endl;
}