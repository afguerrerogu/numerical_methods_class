#include<iostream>

int main(void)
{
    std::cout << ((5==5) && (3>6)) << "\n" ;
    std::cout << ((5==5) or (3>6)) << std::endl ;
    std::cout << ((5==5) xor (3>6)) << std::endl ;
    return 0;
}