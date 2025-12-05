#include<iostream>
using namespace std;

int main() {

	int arr[5];
	cout<<"Enter the number: ";
	for(int i=0;i<5;i++){
		cin>>arr[i];
	}

	int positive = 0;
	int negative = 0;
	int zero = 0;

	for(int i=0;i<5;i++){
		if(arr[i] >0){
			positive++;
		}else if(arr[i] < 0){
			negative++;
		}else{
			zero++;
		}
	} cout<<"Positive count: "<<positive<<endl;
	cout<<"Negative count: "<<negative<<endl;
	cout<<"Zero count: "<<zero<<endl;
}