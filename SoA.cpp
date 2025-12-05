#include<iostream>
using namespace std;

int main() {

	int arr[5];

	cout<<"Enter the number: ";
	for(int i=0;i<5;i++){
		cin>>arr[i];
	}

	int sum = 0;

	for(int i=0;i<5;i++){
		sum = sum + arr[i];
	} cout<<"The total is: "<<sum<<endl;
}