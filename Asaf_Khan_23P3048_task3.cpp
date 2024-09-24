#include<iostream>

using namespace std;

int main(){
	int rows,col;
	
	cout<<"Enter number of rows and columns :";
	cin>>rows>>col;
	cout<<endl;
	
	for(int i = 1; i<=rows;i++){
		int j = 1;
		{
			for(j =1 ; j<=col ; j++){
				cout<<"*";
			}
			cout<<endl;
		}
	}
	
	return 0;
}