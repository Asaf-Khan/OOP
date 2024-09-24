#include<iostream>

using namespace std;

void checkrooms(int f,int r,char [4][5],int pay);
void showrooms(char arr[4][5]);

int main()
{
	char hotel[4][5] = {
		{'-','-','-','-','-'},
		{'*','-','-','*','-'},
		{'-','-','-','-','-'},
		{'-','*','-','*','-'}
	};
	
	char choice;
	char choice2;
	int floor,room;
	int payment,days;
do{
		cout<<"Hotel Booking System"<<endl;
	cout<<"1.Book a room\n2.Show Available rooms\n3.Exit"<<endl;
	cin>>choice;
	switch (choice){
		case '1' :
			cout<<"Which floor you want to book a room in (0-3) "<<endl;
			cin>>floor;
			cout<<endl;
			
			cout<<"Now which room number do you want (0-4)"<<endl;
			cin>>room;
			cout<<endl;
			
			cout<<"For how many days you want to book it :"<<endl;
			cin>>days;
			cout<<endl;
			
			if(floor == 0 || floor == 1){
				payment  = days * 10000;
			}
			else{
				payment = days * 6000;
			}
			checkrooms(floor,room,hotel,payment);	
			break;
		case '2' :
			 showrooms(hotel);
			 break;
		case '3' :
			cout<<"Thanks for the visit ^_^"<<endl;
			return 0;
		default :
			break;
			
			
	}

	cout<<"Do you want to continue (y/n)";
	cin>>choice2;

}while(choice2 != 'n' || choice2 !='N');	
	
	return 0;
	
}
void checkrooms(int f,int r,char arr[4][5],int pay)
{
	for(int i = 0 ;i < 4;i++)
	{
		for(int j = 0; j < 5;j++)
		{
			if( i==f && j==r)
			{
				if(arr[i][j] == '*')
				{
					cout<<"The room is currently booked"<<endl;
				}
				else
				{
					arr[i][j] = '*';
					cout<<"Your room has been booked ^_^"<<endl;
					cout<<"Your total bill wil be :"<<pay;
				}
				
			}
		}
	}
}

void showrooms(char arr[4][5])
{
		for(int i = 0; i < 4 ;i++)
		{
			for(int j = 0; j<5;j++)
			{
				cout<<arr[i][j];
			}
			cout<<endl;
		}
}