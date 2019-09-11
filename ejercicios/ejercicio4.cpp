#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	double val1=0;
	double val2=0;
	cout<< "inserte un numero entero: "<< endl;
	cin>> val1;
	cout<< "inserte un segundo numero entero: "<< endl;
	cin>> val2;
	
	int sum= val1+val2;
	cout<<"la suma de los valores es: "<< sum<< endl;
	int res=val1-val2;
	cout <<"la diferencia entre los valores es: "<< res<< endl;
	int prod=val1*val2;
	cout <<"el producto entre los dos valores es: "<< prod<< endl;
	double div=val1/val2;
	cout <<"la razon entre los numeros v1/v2 es: "<< div << endl;
	
	int val=val1-val2;

	if (val>0){
		cout<< val1<< "es mayor a "<<val2 << endl;
	}
	if (val==0){
		cout <<"los valores son iguales \n";
	}
	if (val<0){
		cout<<val2<< "  es mayor a "<<val1<< endl;
	}

	return 0;
}

