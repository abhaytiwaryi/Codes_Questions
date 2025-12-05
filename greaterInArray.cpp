#include<iostream>
using namespace std;

int main(){
    int arr[5];

    cout<<"Enter the numbers: ";

    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    int compare;
    cout<<"Enter number to check how many greater than this: ";
    cin>>compare;

    int counter = 0;

    for(int i=0; i<5; i++){
        if(arr[i]>compare){
            counter++;
        }
    } if(counter == 0){
        cout<<"There are no number greater than given one";
    }else{
        cout<<"These many numbers are greater that given one:- "<<counter<<endl;
    }
}