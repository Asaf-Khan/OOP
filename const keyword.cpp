//Understanding the use of const Keyword in the parameterized copy constructor.

#include<iostream>
#include<string>

using namespace std;

class Deflt{
    private :
    string name;
    int age;
public :
    Deflt(string y,int x){
        name = y;
        age = x;
    }
    Deflt(const Deflt &d){
//d.name = "XYZ";  >>This line won't work because of the const keyword which doesn't allow changes in the passed object attributes.
        name = d.name;
       
        age  = d.age;
    }
    void display(){
        cout<<"Name :"<<name<<"\n"
            <<"Age :"<<age<<endl;
    }
};
int main(){
    Deflt s1("ABC",14);
    s1.display();
    Deflt s2(s1);
    
    s2.display();
}
