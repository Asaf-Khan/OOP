#include<iostream>

using namespace std;

void subtotal(int size,float arr[]){
	float sum = 0;
	for(int i = 0;i<size;i++){
		sum += arr[i];
		arr[i] = sum;
	}
}

int main(){
	int size;
	cout<<"Enter number of cells :";
	cin>>size;
	
	float arr[size];
	
	cout<<"===ARRAY==="<<endl;
	for(int i = 0 ;i<size;i++){
		cin>>arr[i];
	}
	subtotal(size,arr);
	for(int i = 0 ;i<size;i++){
		cout<<arr[i]<<" ";
	}
}