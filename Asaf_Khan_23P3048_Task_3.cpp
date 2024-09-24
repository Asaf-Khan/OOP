#include<iostream>

using namespace std;

void eliminate_duplicate(int size,int arr[]){
	
	for(int i = 0;i<size;i++){
		int  counter = 0;
		for(int j = 0;j<size;j++){
			if(arr[i] == arr[j] ){
				++counter;
				if(counter>1){
					arr[j] = 0;
				}
			}
		}
	}
	
}

int main(){
	
	int size;
	cout<<"Enter the number of cells : ";
	cin>>size;
	
	int arr[size];
	
	cout<<"===ARRAY==="<<endl;
	
	for(int i = 0 ;i<size;i++)
	{
		cin>>arr[i];
	}
	
	eliminate_duplicate(size,arr);
	
	for(int i = 0 ;i<size;i++)
	{
		cout<<arr[i];
	}
	
	cout<<endl;
	
	 int counter = 0;
    
	for (int i = 0; i < size; i++)
	{
        if (arr[i] != 0) {
            arr[counter++] = arr[i];
        }
    }
    
	 for (int i = counter; i < size; i++)
	 {
        arr[i] = 0;
	}
    
	for(int i = 0 ;i<size;i++){
		cout<<arr[i]<<" ";
	}
	
	
}