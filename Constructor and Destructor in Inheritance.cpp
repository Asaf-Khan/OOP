
//Working of constructor and destructor in inheritance.

#include<iostream>

using namespace std;

static int count = 1;

class Base{
    public :
    Base(){
        cout<<count<<"-Base constructor called\n"<<endl;
        ++count;
    }
    ~Base(){
        cout<<count<<"-Base destructor called\n"<<endl;
        ++count;
    }
};
class Derived : public Base{
    public :
    Derived(){
        cout<<count<<"-Derived constructor called\n"<<endl;
        ++count;
    }
    ~Derived(){
        cout<<count<<"-Derived destructor called\n"<<endl;
        ++count;
    }
};
int main(){
    Derived obj;
    return 0;
}
