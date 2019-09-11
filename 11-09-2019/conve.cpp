#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	double x=0.0;

	cout<<"inserte el numero de millas" << endl;
	cin>> x;
	cout<< x << "  millas" <<endl;
	double km=x*1.609;
	cout<< km << "  kilometros" << endl;

	return 0;
}


