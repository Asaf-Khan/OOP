#include<iostream>

using namespace std;

int main() {
	int size = 1;
	int *array = new int (size);
    /*
    ->The line int *array = new int(size); dynamically allocates memory to create an array of size integers on the heap.
    ->In C++, using new int without specifying a size like new int [instead of new int(size)] does not create an array. 
    ->Instead, it dynamically allocates memory for a single integer on the heap and returns a pointer to that integer.
	*/
    cout<<"-----------Dynamic array-----------"<<endl;
	
    for(int i = 0; i<size; i++) {
		cout<<"Enter a number :";
		cin>>array[i];
	
    	cout<<"Do you want to add another number (1 for yes /0 for no ) :";
		bool choice;
		cin>>choice;
	
    	if(choice == 1) {
			++size;
		}
	}
	cout<<"-------------"<<endl;
	for(int i = 0; i<size; i++) {
		cout<<array[i]<<endl;
	}
    /*
    ->It's important to note that when you use new to allocate memory, 
     you are responsible for deallocating (freeing) this memory using delete[] when you're done using it to avoid memory leaks.
    */
    delete[] array;
    /*
    ->delete[] is used to deallocate arrays allocated with new[].
    ->delete is used to deallocate single objects allocated with new.
    */

}
