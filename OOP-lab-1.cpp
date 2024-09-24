
//just a simple starting program.....

#include<iostream>
#include<string>
#include <stdexcept>

using namespace std;

//declaring constant....

#define abc 100;
//const abc = 100;


int main(){
	
	//declaring variables.....
	
	int variable_1;
	short variable_2;
	long variable_3;
	char variable_4 = 'a';
	float variable_5 = 3.14;
	double variable_6;
	long double variable_7;
	
	//output to the user.....
	
	cout<<"Hello world"<<endl;
	cout<<"Goood morning"<<endl;
	
	cout<<"Enter a number : ";
	
	//input from user.....
	
	cin>>variable_1;
	
	//(int)var;
	//int(var);
	//type casting c-style;
		
		int a = (int)variable_4;
		//or
		int b = int (variable_4);
		
		cout<<a;
	
	//sizeof(var) to find the memory occupied by the data type......
	
	cout<<endl;
	cout<<"Size of long int :"<<sizeof(variable_7)<<endl;
	cout<<"Size of int : "<<sizeof(variable_1)<<endl;
	string aba  = "hello";
 double num = std::stod(aba);
	cout<<num;
	
	return 0;
}

//memory loss only occur when you change a high memory data type to  a smaller one.....

//implecent and explecent data conversion.....