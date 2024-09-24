#include<iostream>

using namespace std;

class Complex {

		int real;
		int imag;
		friend Complex addComplex(Complex c1,Complex c2);
	public :
		Complex() {}
		Complex(int r,int i):real(r),imag(i) {}

		void display() {
			cout<<real<<"+"<<imag<<"i"<<endl;
		}
};
Complex addComplex(Complex c1,Complex c2) {
	Complex result;
	result.real = c1.real + c2.real;
	result.imag = c1.imag + c2.imag;
	return result;
}
int main() {
	Complex c1(2,3),c2(4,5),c3;

	c3 = addComplex(c1,c2);
	c3.display();

	return 0;
}
