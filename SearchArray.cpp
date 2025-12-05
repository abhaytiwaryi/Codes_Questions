#include<iostream>
using namespace std;

int main(){

    int arr[5];

    cout<<"Enter the number: "<<endl;

    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    int target;
    cout<<"Enter the number to be searched: "<<endl;
    cin>>target;

    int counter = 0;

    for(int i=0;i<5;i++){
        if(arr[i]==target){
            counter++;
        }
    }if(counter == 0){
        cout<<"No match found";
    }else{
        cout<<"These many matches found: "<<counter<<endl;
    }
}