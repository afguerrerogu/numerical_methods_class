/* The four adjacent digits in the 1000-digit number that have the greatest product are 9 × 9 × 8 × 9 = 5832.

73167176531330624919225119674426574742355349194934
96983520312774506326239578318016984801869478851843
85861560789112949495459501737958331952853208805511
12540698747158523863050715693290963295227443043557
66896648950445244523161731856403098711121722383113
62229893423380308135336276614282806444486645238749
30358907296290491560440772390713810515859307960866
70172427121883998797908792274921901699720888093776
65727333001053367881220235421809751254540594752243
52584907711670556013604839586446706324415722155397
53697817977846174064955149290862569321978468622482
83972241375657056057490261407972968652414535100474
82166370484403199890008895243450658541227588666881
16427171479924442928230863465674813919123162824586
17866458359124566529476545682848912883142607690042
24219022671055626321111109370544217506941658960408
07198403850962455444362981230987879927244284909188
84580156166097919133875499200524063689912560717606
05886116467109405077541002256983155200055935729725
71636269561882670428252483600823257530420752963450

Find the thirteen adjacent digits in the 1000-digit number that have the greatest product. What is the value of this product?*/

#include<iostream>
#include<cmath>

int digito(int x);


int main(void){
	int b[22]={7,3,1,6,7,1,7,6,5,3,1,3,3,0,6,2,4,9,1,9,2,2};
//	std::cout<<b[999]<<std::endl;
	int producto=1;
	int a=0;
	for(int i=0;i<=13;++i){
		producto=producto*b[i];
		a=a+1;
	}
	return 0;
}


int digito(int b){
	int a;
	int numero[5];
	for(int ii=4;ii>=0;--ii){
//		std::cout<<"ciclo \t"<<ii<<std::endl; 
		if (b<10){
			 numero[0]=b;
//			 std::cout<<numero[0]<<std::endl;
			 break;
                        
           	 }

		a=b%10;
		b=b/10;
		numero[ii]=a;
//		std::cout<<numero[ii]<<std::endl;
		}
	std::cout<<numero[3]<<std::endl;
	return 0;
}	




/*int digito(int x){
	int a;
	int b=1234;
	for(int ii=1;ii=4;++ii){
//		 if (b<10){
//			 return b=digito(3);
//			 std::cout<<b<<std::endl;
//			 break;
                        
//                }

		a=b%10;
		b=b/10;
		return a=digito(ii);
		std::cout<< a<<std::endl;
	}
	while (1);

}	
*/

/*int digito(int b){
	int a;
	do{
		 if (b<10){
			 std::cout<<b<<std::endl;
			 break;
                        
                }

		a=b%10;
		b=b/10;
		std::cout<< a<<std::endl;
	}
	while (1);

}
*/

//g++ -Wall -g -fsanitize=address projeu8.cpp