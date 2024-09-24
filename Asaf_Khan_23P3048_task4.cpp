#include<iostream>

using namespace std;

int main(){
		int rows;
	
	cout<<"Enter number of rows  :";
	cin>>rows;
	cout<<endl;
	
	for(int i = 1; i<=rows/2;i++){
		int j = 1;
		{
			for(j =1 ; j<=i ; j++){
				cout<<"*";
			}
			cout<<endl;
		}
	}
	for(int i = (rows/2)+1; i<=rows;i++){
		int j = rows;
		{
			for(j = rows; j>i ; j--){
				cout<<"*";
			}
			cout<<endl;
		}
	}
	
	
	return 0;
}