#include<iostream>

using namespace std;

int main() 
{
	// 1. P = 4 * a:
	float a;
	cout << "Enter the length of the square: ";
	cin >> a;
	float p;
	p = a;
	p *= 4;
	cout << "The perimeter of the square = " << p << endl;
	// 2. S = a^2
	float s;
	s = a;
	s *= s;
	cout << "Square area = " << s << endl;

	system("pause");


}