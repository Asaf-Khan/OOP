#include<iostream>
#include<string>

using namespace std;

class Employee
{
    public :
    int id;
    string name;  
    string job_title; 
    int hours_worked;
    float rate;

   Employee(){
    id = 111;
    name = "xxxxx";
    job_title = "xxxxxx";
    hours_worked = 1111;
    rate = 1111; 
   }
    Employee(int id,string name,string job_title,int hours_worked,float rate){
    this->id = id;
    this->name = name;
    this->job_title = job_title;
    this->hours_worked = hours_worked;
    this->rate = rate; 
   }
    float calc_salary(int hours_worked,float rate)
    {
        float salary = 0;
        if (hours_worked<=40)
        {   
            salary = hours_worked * rate;
           
        }
        else if (hours_worked>40)
        {
            float over;
            salary  = 40 * rate;
            over = hours_worked - 40;
            salary = salary + (2*(over*rate));
           

        }
         return salary;
    }

};

int main()
{
    int num;
    cout<<"Enter number of employees :";
    cin>>num;
    cout<<endl;
    Employee emp[num];
    int Id;
    string Name;  
    string Job_title; 
    int Hours_worked;
    float rate;

    for(int i  = 0; i<num ; i++)
    {
        cout<<"Enter Employee Details : "<<"\n"
            <<"-------------------------"<<"\n"
            <<"Name : ";
            cin.ignore();
            getline(cin,Name);
        cout<<"ID   : ";
        cin>>Id;
        cout<<endl;
        cout<<"Job title :";
        cin.ignore();
        getline(cin,Job_title);
        cout<<"Hours worked :";
        cin>>Hours_worked;
        cout<<"rate :";
        cin>>rate;
        cout<<endl;
    emp[i] = Employee(Id,Name,Job_title,Hours_worked,rate); 


    }
    cout<<endl;
    for(int i = 0 ; i<num ;i++)
    {
        cout<<"Employee Detail :"<<"\n"
            <<"Name : "<<emp[i].name<<"\n"
            <<"Salary : "<<emp[i].calc_salary(Hours_worked,rate)<<endl;

    }

}