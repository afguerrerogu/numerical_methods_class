#include<iostream>
#include<cmath>

int isprime(long long m );
int largest_prime_factor(long long m);

int main (void)
{
	std::cout<<largest_prime_factor(600851475143)<<std::endl;
	return 0;
}


int isprime(long long m)
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

int largest_prime_factor(long long m)
{
 	int kk=0;

     	for (int ii=2; ii<=m;++ii){
	  if (isprime(ii)==1 && m%ii==0){
		  kk=ii;
	  }
	
  }
	return kk;
}
