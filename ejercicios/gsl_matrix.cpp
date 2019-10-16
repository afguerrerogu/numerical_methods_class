#include<stdio.h>
#include<gsl/gsl_matrix.h>
#include<iostream>
using namespace std;

int main (void){
	gsl_matrix * m= gsl_matrix_alloc (10,3);
	for (int ii=0;ii<10;ii++){
		for (int jj=0;jj<3;++jj){
			gsl_matrix_set (m , ii, jj, 0.23+100*ii+jj);
		}
	}
	for (int ii=0;ii<10;++ii){
		for(int jj=0;jj<3;jj++){
			printf("m(%d,%d)=%.18g\n", ii, jj, gsl_matrix_get(m, ii, jj));
		}
	}
	
//	cout<<setw(3)<<gsl_matrix_get(m,ii,jj)<<endl;
	gsl_matrix_free(m);
	
	return 0;
}

