#include<cmath>
//#include<cstdio>
#include<fstream>
#include<iostream>
double fun(double x);
double der_for ( double x, double h);
double der_med(double x, double h);
double der_rich(double x, double h);



int main (void){

	std::ofstream fout("datos.txt");
	fout.precision(16); fout.setf(std::ios::scientific);

//	double x=1.24;
	double h=0.33;
	
	for (double x=0.1; x<=10; x+=0.1){

		fout<<x<<"\t"<<h<<"\t"<<fun(x)<<"\t"<<-1/(x*x)<<"\t"<<der_for(x,h)<<"\t"<<der_med(x,h)<<"\t"<<der_rich(x,h)<<std::endl;
//		std::fout<<printf("%1.e %25.3e %25.16e %25.16e %25.16e %25.16e %25.16e ", x, h , fun(x) ,-1/(x*x), der_for(x,h) , der_med(x,h) , der_rich(x,h))<<std::endl;	
			
	}
	fout.close();
	return 0;
}

double fun(double x){
	return 1/x;
}


double der_for ( double x, double h){
	return (fun(x+h)-fun(x))/h;
}

double der_med(double x, double h){
	return (fun(x+h/2)-fun(x-h/2))/h;
}

double der_rich(double x, double h){
	return (4*der_med(x,h/2)-der_med(x,h))/3;
}
