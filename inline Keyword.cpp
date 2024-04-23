//Understanding the inline keyword.
/* 
->We use inline keyword to reduce compilation and runtime.
->We use it to reduce the control tranfer(the back and forth motion of the complier in order to fetch the definition or value)less.
->When we use it the complier copies the definition of the function or anything else due to which the back and forth motion of the
  complier is reduced.
*/

#include<iostream>
using namespace std;

inline int triple(int num)
{
    return (num*3);
}

int main ()
{
    cout<<triple(3);
    return 0;
}
