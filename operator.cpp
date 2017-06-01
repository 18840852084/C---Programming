#include<iostream>
using namespace std;
class Complex {
private:
	double dReal;
	double dImag;
public:
	Complex(double r, double i) {
	dReal = r;
	dImag = i;
	}
	Complex operator + (const Complex & c2) {
		//Complex c1;
		return Complex(dReal + c2.dReal, dImag + c2.dImag);
	}
	void Print() {
		cout << '(' << dReal << "£¬" << dImag << ')' << endl;
	}
};
int main() {
	Complex A(3, 7);
	Complex B(4, -18);
	Complex C = A + B;
	cout << "A+B=";
	C.Print();
	system("pause");
	return 0;
}