/*The prime 41, can be written as the sum of six consecutive primes:

41 = 2 + 3 + 5 + 7 + 11 + 13
This is the longest sum of consecutive primes that adds to a prime below one-hundred.

The longest sum of consecutive primes below one-thousand that adds to a prime, contains 21 terms, and is equal to 953.

Which prime, below one-million, can be written as the sum of the most consecutive primes?*/

#include<cstdio>
#include<cmath>
#include <fstream>
#include<iostream>

int isprime(int m);

int main(void){
  
  std::ofstream fout ("euler50.txt");
	int n;
	int sum;
	int numero;
	
	for(int jj=2;jj<6000;++jj){
	  sum=0;
	  numero=0;
//	  fout<<"este es el numero inicial"<<"\t"<< jj<<"\n";
		for(int ii=jj;ii<6000;++ii){
//			fout<<ii<<"\n";
			if(isprime(ii)==1){
//				fout<<"el num es prim"<< ii<<"\n";
				sum=sum+ii;
			  numero=numero+1;
			  }
//  			fout <<"suma"<<sum<<"\n";
			if (isprime(sum)==1 and sum<1000000 and isprime(ii)==1 ){
				fout<<sum<<"\t"<<"numeros sumados"<<"\t"<<numero<<std::endl;
			}
		}
		
//		fout<<sum<<"\t"<<"numero de primos sumados"<<"\t"<<numero<<"\n";
  }
	//fout<<n<<"\n";
	
	fout.close();
	return 0;
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

