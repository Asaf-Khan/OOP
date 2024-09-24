#include<iostream>
#include<string>

using namespace std;

class Birthday {
		int day;
		int month;
		int year;

	public :
		void setday(int d) {
			day = d;
		}
		void setmonth(int m) {
			month = m;
		}
		void setyear(int y) {
			year = y;
		}
		int  getday() {
			return day;
		}
		int  getmonth() {
			return month;
		}
		int  getyear() {
			return year;
		}

};
class ContactBook {
	public :
		string Name;
		int phone;
		string email;

		Birthday DOB;
		ContactBook() {}
		ContactBook(string n,int p,string e,int d,int m,int y) {
			Name = n;
			phone = p;
			email = e;
			DOB.setday(d);
			DOB.setmonth(m);
			DOB.setyear(y);
		}
		void show() {
			cout<<"Name   : "<<Name<<"\n"
			    <<"Number : "<<phone<<"\n"
			    <<"email  : "<<email<<"\n"
			    <<"Date   : "<<DOB.getday()<<"/"<<DOB.getmonth()<<"/"<<DOB.getyear();
		}
};


int main() {
	int size;
	cout<<"---------------------Welcome to you CONTACT-BOOK---------------------"<<endl;
	cout<<"How many contact do you want to add : ";
	cin>>size;

	ContactBook contacts[size];
	string name,mail;
	int num,d,m,y;

	for(int i = 0; i<size; i++) {
		cout<<i+1<<"-Contact name : ";
		cin.ignore();
		getline(cin,name);
		cout<<"Number : ";
		cin>>num;
		cout<<"email : ";
		cin.ignore();
		getline(cin,mail);
		system("cls");
		cout<<"Date of Birth : \n"
		    <<"Day   : ";
		cin>>d;
		cout<<"Month : ";
		cin>>m;
		cout<<"Year : ";
		cin>>y;
		contacts[i] = ContactBook(name,num,mail,d,m,y);
		system("cls");
	}
	// for (int i = 0; i < size; i++)
	// {
	//     contacts[i].show();
	//     cout<<"\n"<<endl;
	// }
	cout<<"Finding contacts with same birth month : ";

	for (int  i = 0; i < size; i++) {
		for (int  j = 0; i < size; j++) {
			if(contacts[i].DOB.getmonth() == contacts[j+1].DOB.getmonth()) {
				cout<<"\n"<<endl;
				contacts[i].show();
				cout<<"\n"<<endl;
				contacts[j+1].show();

			}
		}

	}

	return 0;
}