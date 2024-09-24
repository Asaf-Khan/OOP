#include<iostream>
#include<string>
#include<conio.h>

using namespace std;

class Students
{
    private :
    int size;
    string name;
    string* array;
    static int totalStudent;
    
    public :
     int studentID;
    //Ma'am I was unable to declare constant ID for each through user;
    Students():studentID(0),size(0),array(nullptr){++totalStudent;}

   // Students(int size,int u,string naem):name(naem),studentID(u),size(size),array(new string[size]){++totalStudent;}
    void set2(int size,int u,string naem){
        this->size =size;
        studentID = u;
        name = naem;
        
    }
    

    ~Students(){delete[] array;}

    void set(){
        array = new string[size];
        for (int i = 0; i < size; i++)
        {
            cout<<"Enter course :";
            cin.ignore();
            getline(cin,array[i]);
        }
        
    }
       void display() {
        cout << "Name: " << name << endl;
        cout << "Student ID: " << studentID << endl;
        cout << "Courses:" << endl;
        for (int i = 0; i < size; i++) {
            cout << "- " << array[i] << endl;
        }
       }
       void display2(){
        cout<<endl;
        cout<<"Total number of students : "<<totalStudent<<endl;
       }
};

 int Students :: totalStudent = 0;


int main()
{
    int students;
    cout<<"Enter number of students : ";
    cin>>students;
    
    
    Students obj[students];
    for(int i = 0; i<students;i++)
    {
        string name;
        int ID;
        int courses;
               
       cout<<"Enter student : "<<i+1<<"\n"
           <<"Name :";
           cin.ignore();
            getline(cin,name);
        cout<<"Enter ID : ";
        cin>>ID;  
        cout<<"Enter number of courses :";
        cin>>courses;
        obj[i].set2(courses,ID,name);
         if (courses > 0) {
            obj[i].set();
        }      
    }

    cout<<endl;
    cout<<endl;
    
     for (int i = 0; i < students; i++) {
        cout << "Detail of student: " << i+1 << endl;
        obj[i].display();
        cout << endl;
    }
    obj[students].display2();   

}