#include<iostream>

int main(void){
    double a{0};
    std::cout<<"escriba un numero \n";
    std::cin>>a;
    if (a%3==0)
    {
        std::cout<<"numero"<< a <<"es divisible entre 3\n";
    }
    else
    {
        std::cout<<"el numero " << a << "el numero no es divisible entre 3";
    }
        

    return 0;
}