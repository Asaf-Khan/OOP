#include<iostream>
#include<string>

using namespace std;

struct Employee
{
    string name;
    int rateC;
    int rateT;
    int rateP;
};
 void displayData(int size,Employee array[])
    {
     for(int i = 0;i<size;i++)
    {
        cout<<"Employee : "<<i+1<<"\n"
            <<"Name : "<<array[i].name<<"\n"
        <<"Communication ratings : "<<array[i].rateC<<"\n"
        <<"Team-work ratings : "<<array[i].rateT<<"\n"
        <<"Problem-solving ratings :"<<array[i].rateP<<"\n"<<endl;

    }

    }
void changeRatings(int size,Employee array[])
{
    int index;
    
     for(int i = 0;i<size;i++)
    {
        cout<<"index : "<<i<<"\n"
        <<"Name : "<<array[i].name<<"\n"
        <<"Communication ratings : "<<array[i].rateC<<"\n"
        <<"Team-work ratings : "<<array[i].rateT<<"\n"
        <<"Problem-solving ratings :"<<array[i].rateP<<"\n"<<endl;
    cout<<"--------------------------------------------------------"<<endl;

    }

    cout<<"Now Enter the index of the employee :";
    cin>>index;
    cout<<"Employee : "<<array[index].name<<"\n"
        <<"Enter new ratings for communication(1-10) : ";
    cin>>array[index].rateC;
    cout<<endl;
    cout<<"Enter new ratings for team-work(1-10) : ";
    cin>>array[index].rateT;
    cout<<endl;
    cout<<"Enter new ratings for problem-solving(1-10) : ";
    cin>>array[index].rateP;

    cout<<"--------------------------------------------------------"<<endl;
    cout<<"NEW RATINGS FOR "<<array[index].name<<"\n"
        <<"--------------------------------------------------------"<<"\n"
        <<"Communication ratings : "<<array[index].rateC<<"\n"
        <<"Team-work ratings : "<<array[index].rateT<<"\n"
        <<"Problem-solving ratings :"<<array[index].rateP<<"\n"<<endl;


}
void calcAverageRating(int size,Employee array[])
{
    int index;

    for(int i = 0;i<size;i++)
    {
        cout<<"index : "<<i<<"\n"
        <<"Name : "<<array[i].name<<"\n"
        <<"Communication ratings : "<<array[i].rateC<<"\n"
        <<"Team-work ratings : "<<array[i].rateT<<"\n"
        <<"Problem-solving ratings :"<<array[i].rateP<<"\n"<<endl;
    cout<<"--------------------------------------------------------"<<endl;

    }

    cout<<"Now Enter the index of the employee :";
    cin>>index;
    float average = (array[index].rateC + array[index].rateT + array[index].rateP)/3;
    cout<<array[index].name<<"average rating is :"<<average;
}
  
int main()
{
    int size;
    cout<<"Enter the number of employees :";
    cin>>size;
    cout<<endl;

    Employee emp[size];
    for(int i = 0;i<size;i++)
    {
        cout<<"\nEmployee : "<<i+1<<"\n"
            <<"Name : ";
            cin.ignore();
            getline(cin,emp[i].name);
          
        
        cout<<"Communication ratings (1-10) : ";
        cin>>emp[i].rateC;

        cout<<"Team-work ratings (1-10) : ";
        cin>>emp[i].rateT;

        cout<<"Problem-solving ratings (1-10) :";
        cin>>emp[i].rateP;

    }
    int choice;
    cout<<"\nMENU"<<"\n"
        <<"======="<<"\n"
        <<"1.Display Data"<<"\n"
        <<"2.Change Data"<<"\n"
        <<"3.Calculate Average rating of a employee"<<endl;
    cin>>choice;
    switch (choice)
    {
    case 1:
         displayData(size,emp);
        break;
    case 2:
         changeRatings(size,emp);
        break;
    case 3:
        calcAverageRating(size,emp);
        break;
    default:
        break;
    }

}
