#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <typeinfo>
#include "matrix.cpp"
using namespace std;
int main(){
	try
	{
		cout << "************************************************" << endl;
		cout << "********************Start of tests *********************" << endl;
		Matrix X,Y(2,16);
		cout << "Matrix X" << X << endl;
		cout << "************************************************" << endl;
		
		cout << "Matrix Y" << Y << endl;
		cout << "************************************************" << endl;
		X.setData("14,45,3,78,90,58,34,234,34");
		cout << "Matrix X result" << X << endl;
		Matrix W(6,4);
		cout << "************************************************" << endl;
		cout << "Line of Rows: " << getNumberOfRows(W) << endl;
		cout << "Line of Columns: " << getNumberOfColumns(W) << endl;
		cout << "************************************************" << endl;
		Y = X;
		cout <<"Matrix Y" << Y << endl;
		cout << "************************************************" << endl;
		cout << "Matrix X: " << X(1,1) << endl;
		cout << "Matrix X: " << Y(3,3) << endl;
		cout << "************************************************" << endl;
		cout << "Element of highestValue: " << X.highestValue() << endl;
		X += Y;
		cout <<"X += Y: " << X << endl;
		X -= Y;
		cout << "X -=Y : " << X <<endl;
		cout << "************************************************" << endl;
		Matrix a(3,2),b(2,3);
		a.setData("2,2,3,3,4,4");
		b.setData("2,3,4,2,3,4");
		cout << "a" << a << endl;
		cout << "b" << b << endl;
		Matrix c = a * b;
		cout << "a * b" << c << endl;
		cout << "************************************************" << endl;
		cout << "b.transpose" << b.transpose() << endl;
		cout << "b" << b << endl;
		double t = 0.2;
		Matrix d = b * t;
		cout << "b" << d << endl;
		cout << "************************************************" << endl;
		Matrix i(3,3);
		i.setData("1,2,3,6,5,4,3,7,2");
		cout << "i" << i << endl;
		cout << "Deterininant" << determinant(i) << endl;
	}
	catch(const char *msg)
	{
		cerr << msg << endl;
	}
	return 0;

}