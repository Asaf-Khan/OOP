#include<iostream>
using namespace std;

//TASK 1:

int main(){
	int a;
	char b;
	float c;
	long d ;
	double e;
	
	cout<<"Size of int : "<<sizeof(a)<<endl;
	cout<<"Size of char : "<<sizeof(b)<<endl;
	cout<<"Size of float : "<<sizeof(c)<<endl;
	cout<<"Size of long : "<<sizeof(d)<<endl;
	cout<<"Size of double : "<<sizeof(e)<<endl;






//TASK 2:


	char f;
	cout<<"Enter a character : ";
	cin>>f;
	
	int h = (char)f;
	int g = int (f);
	
	cout<<"Ascii of the character : "<<g<<endl;
	

	



	
//TASK 3	:
																				

	int i;
	int j;

	cout<<"Enter two numbers : ";
	cin>>i>>j;

	cout<<"Before  Swap : "<<i<<" "<<j<<endl;

	i=i+j;
	j=i-j;
	i=i-j;

	cout<<"After  Swap : "<<i<<" "<<j<<endl;
	

	






//TASK 4:


	float temperature;
	
	cout<<"Enter temperature in centigrade : ";
	cin>>temperature;
	
	cout<<endl;

	float temp_f = (temperature *9/5) + 32;			
	
	cout<<"Temperature in fahrenhiet is : "<<temp_f;

	return 0;
}
