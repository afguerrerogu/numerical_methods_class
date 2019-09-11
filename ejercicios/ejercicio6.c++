#include <iostream> 
#include <string>

using namespace std;

int main(void)
{
	
	int a,b,c;
	
	cout<<"inserte tres numeros enteros: "<< endl;
	cin>> a >> b >> c;
	int kk=100000;
	if (kk>a){
		kk=a;
	}
	if (kk>b){
		
		kk=b;
	}
	if (kk>c){
		kk=c;

	}
	int mm=0;
	if (mm<a){
		mm=a;
	}
	if (mm<b){
		mm=b;
	}
	if(mm<c){
		mm=c;
	}
	int ss;

	if (kk==a && mm==b||kk==a && mm==b){
		ss=c;
	}
	 if (kk==b && mm==c||kk==c && mm==b){
                ss=a;
        }
	 if (kk==a && mm==c||kk==c && mm==a){
                ss=b;
        }

	cout <<kk<<" , " <<ss<<" , " <<mm<<endl;


	return 0;
}

