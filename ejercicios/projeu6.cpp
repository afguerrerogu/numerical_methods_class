/*The sum of the squares of the first ten natural numbers is,

12 + 22 + ... + 102 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)2 = 552 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.*/

#include<cstdio>
#include<cmath>
#include<iostream>

int sum_cadr(int a);
int cadr_sum(int a);
int dif(int a);

int main (void){

	std::cout<<dif(100)<<std::endl;
//	printf("%25", dif(10));
	return 0;
}

int sum_cadr(int a){
	int sum=0;
	for (int ii=1;ii<=a;++ii){
		sum=sum+std::pow(ii,2);
	}
	return sum;
}

int cadr_sum(int a){
	int sum =0;
	for (int ii=1;ii<=a;++ii){
		sum =sum+ii;
	}
	return pow(sum,2);
}

int dif(int a){
	return cadr_sum(a)-sum_cadr(a);
}

