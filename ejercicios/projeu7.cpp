/*By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?*/

#include<iostream>
#include<cmath>
int isprime(int m);


int main (void){

	int sum=0;

	for (int i=0; i<=2000000;++i){
		if (isprime(i)==1){
			sum=sum+1;

			if (sum==10002){
				std::cout<<i<<std::endl;
			}
		}
	}
	
}

int isprime(int m)
{
	  if (m == 1) return 0;
	    int var = 1;
	      for(int ii = 2; ii <= std::sqrt(m); ++ii) {
		          if (m%ii==0) {
				        var = 0;
					break;
					          }
			    }
	        return var;
}
		


