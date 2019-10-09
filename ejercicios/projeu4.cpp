//A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

//Find the largest palindrome made from the product of two 3-digit numbers.

#include<iostream>
#include<cmath>

int inve(int a);

//int num(int a);

//int main(void){
//	std::cout<<num(10000)<<std::endl;
//	return 0;
//}

int main (void){
//	std::cout<<inve(1239)<<std::endl;
	for(int ii=900;ii<=999;++ii){
	for(int jj=900;jj<=999;++jj){
			if (ii*jj==inve(ii*jj)){
				std::cout<<ii<<"\t"<<jj<<"\n";	
				std::cout<<ii*jj<<std::endl;
					}
//			std::cout<< ii*jj<<std::endl;
		}
	}	
	return 0;
}


int inve(int a){
	int kk=0;
	while(a>0){
		kk=kk+a%10;
//		std::cout<<kk<<std::endl;
		kk=kk*10;
		a=a/10;
	}
	return kk/10;
}


//int num(int a){
//	for (int ii=a-1; ii>=0; ii=ii-1) if (a%ii==0){
//		std::cout<<ii<<"\n";
//	}
//}

