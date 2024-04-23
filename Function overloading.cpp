//Understanding Function overloading.

/* NOTE :
  The following four operators can't be overloaded.
   1) .
   2) .*(pointer to member)
   3) ::
   4) ?:
   
*/
#include<iostream>

using namespace std;

class Complex
{
    int real;
    int imagenary;

    public :
    Complex(int i,int r):real(r),imagenary(i){}
    
    Complex operator+(const Complex obj);

    void display();    
};
Complex Complex::operator+(const Complex obj){
        int r = real + obj.real;
        int i = imagenary + obj.imagenary;
        
        Complex obj2(r,i);
        
        return obj2;
    }
void Complex::display(){
        cout<<"Real Part      : "<<real<<endl;
        cout<<"Imagenary Part : "<<imagenary<<"i"<<endl;
    }
int main()
{
    Complex num1(5,6),num2(2,3);
    //Due to num1 the operator function is called and the num2 is passed as arrgument.
    Complex num3 = num1 + num2;
    num3.display();

    return 0;
}
