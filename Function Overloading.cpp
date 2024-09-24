#include<iostream>

using namespace std;

class Overload
{
private:
    int age;

public:
    Overload() : age(10) {}

    // Prefix increment operator (++obj)
    void operator++()
    {
        cout << "Prefix operator called : " << endl;
        ++age;
    }

    // Postfix increment operator (obj++)
    void operator++(int)
    {
        cout << "Postfix operator called :" << endl;
        age++;
    }

    // Prefix increment operator for assignment (++obj)
    void operator++()
    {
        
                
    }

    void display() { cout << "The age is " << age << endl; }
};

int main()
{
    Overload op, op2;
    ++op;
    
    op.display();
    
    op2.display();
    return 0;
}