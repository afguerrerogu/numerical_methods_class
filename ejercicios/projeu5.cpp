//2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

#include<iostream>


//int mult(long  a);


/*int main (void){
	do{
		int sum=0;
		for (int ii=1;ii<=6000000;++ii){
			for (int jj=1;jj<=10;++jj){
				sum=sum+ii%jj;
			}
			std::cout<<ii<<std::endl;
		}
	
	while (sum !=0);	
	}

	mult(6e7);
	return 0;
}*/

int main (void){

//	int sum=0;
	for (int ii=2520; ii<=300000000;ii=ii+10){
		int sum=0;
//		std::cout<<ii<<"\n";
		for (int jj=1;jj<=20;++jj){
//			if(ii%jj==0){
				sum=sum+ii%jj;
//				std::cout<<ii%jj<<std::endl;
		}
		if (sum==0){
			std::cout<<ii<<std::endl;
			}
		
//		std::cout<<sum<<std::endl;
		}
}




			

