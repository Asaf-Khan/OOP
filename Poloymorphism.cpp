//for polymorphism the classes must inherite.
//KEYWORD : virtual
#include<iostream>
#include<string>

using namespace std;
//if void show () = 0; this is called pure abraction.
class parent{
    public :
    virtual void show (){ //virtual keyword shadows this function.
        cout<<"Parent class"<<endl;
    }
};
//concrete class 
class child:public parent{
    public :
    void show (){
        cout<<"Child class"<<endl;
    }
};
int main(){
    parent *ptr;
    //function call depends upon the pointer data type, when you don't use virtual keyword.
    child p;
    ptr = &p;
    ptr->show();

    return 0;
}