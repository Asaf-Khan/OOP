#include<iostream>
#include<string>

using namespace std;

class BaseClass{
    private :
    string name ;
    string behaviour ;

    public :
    BaseClass(){}
    
    BaseClass(string ename,string ebehaviour)
            :name(ename),behaviour(ebehaviour){}

    void setName(string ename){name = ename;}
    void setBehaviour(string ebehaviour){behaviour = ebehaviour;}
    
    void  displayBase(){
        cout<<"<<___BASE___>>"<<"\n"
            <<"Name      :"<<name<<"\n"
            <<"Behaviour :"<<behaviour<<endl;
    }
    
};
class DerivedClass : public BaseClass{
    private : 
     string made;

    public :
    DerivedClass(){}
    DerivedClass(string ename,string ebehaviour,string emade):BaseClass(ename,ebehaviour),made(emade){}

    void setmade(string emade){made = emade;}

    void displayDerived(){
        BaseClass::displayBase();
        cout<<"Made from :"<<made<<endl;
    }
};
int main(){
    DerivedClass D_obj;
 
    D_obj.setName("A pencile");
    D_obj.setBehaviour("A solid non_living thing");
    D_obj.setmade("From wood or also can be made from plastic");
    
    D_obj.displayDerived();

    return 0;
}