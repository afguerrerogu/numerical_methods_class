#include <iostream>
using namespace std;

//const double X=5.3;

int main(void)
{
	//X=2;
	//cout<< &x << endl;
	double x=7.4;
	cout<< &x << endl;

	{
		cout<< &x << endl;
		double x=7.4;
		cout<< &x << endl;
	}
	cout<< &x << endl;

	return 0;
}

