#include<iostream>
#include<string>

using namespace std;

class BaseClass {
    private :
    string Company;
    string Product;

    public :
    BaseClass(){}
    BaseClass(string company,string product)
    :Company(company),Product(product){}

    void setCompany(string company){Company = company;}
    void setProduct(string product){Product = product;}
    void displayBase(){
        cout<<"_____BASE_____"<<"\n"
            <<"Company :"<<Company<<"\n"
            <<"Product :"<<Product<<endl;
    }

};
class DerivedClass_1 : public BaseClass {
    private :
    string Made;
    public :
    DerivedClass_1(){}
    DerivedClass_1(string company,string product,string made)
    :BaseClass(company,product),Made(made){}

    void setMade (string made){Made = made;}

    void displayDerived1(){
        BaseClass::displayBase();
        cout<<"Made :"<<Made<<endl;
    }
};
class DerivedClass_2 : public BaseClass {
     private :
    string Made;
    public :
    DerivedClass_2(){}
    DerivedClass_2(string company,string product,string made)
    :BaseClass(company,product),Made(made){}

    void setMade (string made){Made = made;}

    void displayDerived2(){
        BaseClass::displayBase();
        cout<<"Made :"<<Made<<endl;
    }
};
int main(){
    DerivedClass_1 obj1;

    obj1.setCompany("DOLLAR");
    obj1.setProduct("Pencile");
    obj1.setMade("Wood");

    DerivedClass_2 obj2;

    obj1.setCompany("DOLLAR");
    obj1.setProduct("Pencile");
    obj1.setMade("Plastic");

    cout<<"Product--> 1"<<endl;
    obj1.displayDerived1();
    cout<<"Product--> 2"<<endl;
    obj2.displayDerived2();


    return 0;
}
