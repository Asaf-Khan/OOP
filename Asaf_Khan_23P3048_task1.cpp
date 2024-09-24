#include<iostream>

using namespace std;

int main(){
	char choice_1;
	char choice_2;


	do{
		cout<<"Do you want a burger ? Y/N"<<endl;
		cin>>choice_1;
		cout<<endl;
		
	if(choice_1 == 'y' || choice_1 == 'Y' )
	{
	
		cout<<"Buger added"<<endl;
		cout<<"Do you want to add fries and drinks ? Just for 200.Rs Y/N";
	
		cin>>choice_2;
		cout<<endl;
		
		if(choice_2 == 'y' || choice_2 == 'Y')
		{
			cout<<"Thank You\nYour total bill is 500.Rs";
			return 0;
		}
		
		if(choice_2 == 'n' || choice_2 =='N')
		{
			cout<<"Your choice!Thank You\nYour total bill is 300.Rs";
			return 0;
		}
		
		else{
			cout<<"invalid input"<<endl;
			
		}
		
	}
	
	if(choice_1 == 'n' || choice_1 =='N')
	{
		cout<<"No problem.See you next time"<<endl;
		return 0;
	}
	else
	{
		cout<<"invalid Input"<<endl;
		
	}
	
	}while(choice_1 != 'y' || choice_1 != 'Y' ||choice_1 != 'n' || choice_1 !='N'||choice_2 != 'y' || choice_2 != 'Y'||choice_2 != 'n' || choice_2 !='N' );
	
	return 0;
}